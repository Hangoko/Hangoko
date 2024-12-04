#ifndef __STACK_H__
#define __STACK_H__
#pragma once
#include <iostream>
using namespace std;
template <class T>
class Stack
{
	T* begin;
	T* end;
	int size;
public:
	Stack() : size(5) {
        begin = new T[size];
        end = begin;
    }
	Stack(int _n) : size(_n) {
        begin = new T[size];
        end = begin;
    }
	Stack(const Stack& _A) : size(_A.size) {
        begin = new T[size];
        end = begin;
        for (int i = 0; i < size; i++) {
            *(begin + i) = *(_A.begin + i);
            end++;
        }
    }
	~Stack() {
        delete[] begin;
    }
	void Push(T a) { // Добавляет элемент в конец стэка. В случае если стэк заполнен, удваиваем его размер.
        if (end == begin + size) {
            int new_size = size * 2;
            T* new_stack = new T[new_size];
            for (int i = 0; i < size; i++) {
                *(new_stack + i) = *(begin + i);
            }
            delete[] begin;
            begin = new_stack;
            end = begin + size; 
            size = new_size;
        }
        *(end++) = a;
    }
	T top() { // "Вытаскивает" последний элемент без удаления в стэке
        if (begin == end) return T();
        return *(end - 1);
    }
	T pop() { // "Вытаскивает" последний элемент с удалением
        if (begin == end) return T();
        return *(--end); 
    }
	bool empty() {
        return end == begin; 
    }
	int Size() {
        return end - begin;
    }
    Stack& operator=(Stack<T>& a) {
        delete[] begin;
        T* copied_stack = new T[a.size];
        for (int i = 0; i < a.size; i++) {
            *(copied_stack + i) = *(a.begin + i);
        }
        begin = copied_stack;
        end = copied_stack + (a.end - a.begin);
        size = a.size;
        return *this;
    } 
	bool operator==(Stack<T>& a) {
        if (size != a.size) return false;
        for (int i = 0; i < size; i++) {
            if (*(begin + i) != *(a.begin + i)) return false;
        }
        return true;
    }
	friend ostream& operator<<(ostream& out, const Stack& a) {
		for (int i = 0; i < a.end - a.begin; i++)
			out << a.begin[i] << ' ';
		return out;
	}
};
#endif
