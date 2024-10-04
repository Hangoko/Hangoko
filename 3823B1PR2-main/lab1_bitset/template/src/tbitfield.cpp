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
	BitLen = len * __SIZEOF_INT__; 
	pMem = new TELEM(len);
	MemLen = len;
}

TBitField::TBitField(const TBitField& bf) // конструктор копирования
{
	BitLen = bf.BitLen;
	pMem = new TELEM(bf.MemLen);
	for(int i = 0; i < bf.MemLen; i++) {
		pMem[i] = bf.pMem[i];
	}
	MemLen = bf.MemLen;
}

TBitField::~TBitField()
{
	delete[] pMem;
}

int TBitField::GetMemIndex(const int n) const // индекс Мем для бита n
{
	if (n >= 0 && n <= BitLen) {
		return n / (__SIZEOF_INT__ * 8);
	}
	throw ("Index went out of range!");
}

TELEM TBitField::GetMemMask(const int n) const // битовая маска для бита n
{
	if (n >= 0 && n <= BitLen) {
		return 1 << n;
	}
	throw ("Index went out of range!");
}

// доступ к битам битового поля

int TBitField::GetLength(void) const // получить длину (к-во битов)
{
	return BitLen;
}

void TBitField::SetBit(const int n) // установить бит
{
	pMem[GetMemIndex(n)] |= GetMemMask(n);
}

void TBitField::ClrBit(const int n) // очистить бит
{
	pMem[GetMemIndex(n)] ^= GetMemMask(n);
}

int TBitField::GetBit(const int n) const // получить значение бита
{
	return pMem[GetMemIndex(n)] & GetMemMask(n) != 0 ? 1 : 0;
}

// битовые операции

TBitField& TBitField::operator=(const TBitField& bf) // присваивание
{
	BitLen = bf.BitLen;
	delete[] pMem;
	pMem = new TELEM(bf.MemLen);
	for(int i = 0; i < bf.MemLen; i++) {
		pMem[i] = bf.pMem[i];
	}
	MemLen = bf.MemLen;
	return *this;
}

int TBitField::operator==(const TBitField& bf) const // сравнение
{
	if (BitLen != bf.BitLen || MemLen != bf.MemLen) {
		return 0;
	}
	for (int i = 0; i < MemLen; i++) {
		if (pMem[i] != bf.pMem[i]) {
			return 0;
		}
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