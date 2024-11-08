// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tbitfield.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Битовое поле

#include <bitset>
#include "tbitfield.h"

TBitField::TBitField(int len)
{
	BitLen = len * sizeof(TELEM);
	MemLen = len; 
	pMem = new TELEM(len);	
}

TBitField::TBitField(const TBitField& bf) // конструктор копирования
{
	BitLen = bf.BitLen;
	MemLen = bf.MemLen;
	pMem = new TELEM(bf.MemLen);
	for(int i = 0; i < bf.MemLen; i++) {	
		pMem[i] = bf.pMem[i];
	}
}

TBitField::~TBitField()
{
	delete[] pMem;
}

int TBitField::GetMemIndex(const int n) const // индекс Мем для бита n
{
	if (n <= 0 || n >= BitLen) throw ("Index went out of range!");
	return n / (sizeof(TELEM) * 8);
}

TELEM TBitField::GetMemMask(const int n) const // битовая маска для бита n
{
	if (n <= 0 || n >= BitLen) throw ("Index went out of range!");
	return 1 << n;
}

// доступ к битам битового поля

int TBitField::GetLength(void) const // получить длину (к-во битов)
{
	return BitLen;
}

void TBitField::SetBit(const int n) // установить бит
{
	if (n < 0 || n >= BitLen)  throw ("Index is not correct!");
	pMem[GetMemIndex(n)] |= GetMemMask(n);
}

void TBitField::ClrBit(const int n) // очистить бит
{
	if (n < 0 || n >= BitLen) throw ("Index is not correct!");
	pMem[GetMemIndex(n)] &= ~GetMemMask(n);
}

int TBitField::GetBit(const int n) const // получить значение бита
{
	if (n < 0 || n >= BitLen) throw ("Index is not correct!");
	return pMem[GetMemIndex(n)] & GetMemMask(n);
}

// битовые операции

TBitField& TBitField::operator=(const TBitField& bf) // присваивание
{
	BitLen = bf.BitLen;
	MemLen = bf.MemLen;
	delete[] pMem;
	pMem = new TELEM[MemLen];
	for(int i = 0; i < MemLen; i++) {
		pMem[i] = bf.pMem[i];
	}
	return *this;
}

int TBitField::operator==(const TBitField& bf) const // сравнение
{
	if (BitLen != bf.BitLen || MemLen != bf.MemLen) return 0;
	for (int i = 0; i < MemLen; i++) {
		if (pMem[i] != bf.pMem[i]) return 0;
	}
	return 1;
}

int TBitField::operator!=(const TBitField& bf) const // сравнение
{
	return !(*this == bf);
}

TBitField TBitField::operator|(const TBitField& bf) // операция "или"
{
	int LONGER_MEMLEN = (bf.MemLen > MemLen) ? bf.MemLen : BitLen;
	int SHORTER_MEMLEN = (bf.MemLen > MemLen ? BitLen : bf.MemLen);
	TBitField result (LONGER_MEMLEN);
	for (int i = 0; i < SHORTER_MEMLEN; i++) {
		result.pMem[i] = pMem[i] | bf.pMem[i];
	}
	for (int i = SHORTER_MEMLEN; i < LONGER_MEMLEN; i++) {
		result.pMem[i] = (bf.MemLen > MemLen) ? bf.pMem[i] : pMem[i];
	}
	return result;
}

TBitField TBitField::operator&(const TBitField& bf) // операция "и"
{
	TBitField result (MemLen > bf.MemLen ? bf.MemLen : MemLen);
	for (int i = 0; i < bf.MemLen && i < MemLen; i++) {
		result.pMem[i] = pMem[i] & bf.pMem[i];
	}
	return result;
}

TBitField TBitField::operator~(void) // отрицание
{
	TBitField result (MemLen);
	for (int i = 0; i < MemLen; i++) {
		result.pMem[i] = ~pMem[i];
	}
	return result;
}

// ввод/вывод

istream& operator>>(istream& istr, TBitField& bf) // ввод
{
	istr >> bf.MemLen;
	for (int i = 0; i < bf.MemLen; i++) {
		istr >> bf.pMem[i];
	}
	return istr;
}

ostream& operator<<(ostream& ostr, const TBitField& bf) // вывод
{
	ostr << "Битовая длина поля: " << bf.GetLength() << "\n";
	ostr << "Реальная длина поля: " << bf.GetLength() / 32 << "\n";
	ostr << "Элементы битового поля: ";
	for (int i = 0; i < bf.GetLength() / 32; i++) {
		ostr << bf.pMem[i] << " ";
	}
	return ostr;
}