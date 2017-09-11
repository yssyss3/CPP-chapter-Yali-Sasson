#pragma once
#include <vector>
#include <iostream>
#include "arrElement.h"
template <class T>
class SafePointer {
public:
	SafePointer(int length);
	
	SafePointer<T>& operator+(const int& n) const;
	SafePointer<T>& operator-(const int& n) const;
	SafePointer<T> operator++(int n);
	void operator--();


private:
	int m_length;
	T* m_start;
	T* m_end;
	T* m_current;

	SafePointer(int length, T* arr, T* current);
};


template<class T>
SafePointer<T>::SafePointer(int length) : m_length(length) {
	m_start = new T[length];
	m_end = m_start + (length - 1);
	m_current = m_start;
}

template<class T>
SafePointer<T>::SafePointer(int length, T* arr, T* current) : m_length(length), m_start(arr), m_current(current) {
	m_end = m_start + (length - 1);
}

template <class T>
SafePointer<T>&  SafePointer<T>::operator+(const int& n) const {
	if (m_current + n > m_end || m_current + n < m_start) {
		throw std::exception("index out of bounds");
	}
	else {
		return SafePointer<T>(m_length, m_start, m_current + n);
	}
}

template <class T>
SafePointer<T>& SafePointer<T>::operator-(const int& n) const {
	return *this + (n*-1);
}

template <class T>
SafePointer<T> SafePointer<T>::operator++(int n) {
	if (m_current + 1 < m_end) {
		m_current++;
	}
	return *this;

}




