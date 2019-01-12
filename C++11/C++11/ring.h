#pragma once
#include "string"
#include <iostream>
using namespace std;
template<class T>
class ring
{
private:
	int m_pos;
	int m_size;
	T*m_values;
public:
	ring(int size) :m_pos(0),m_size(size), m_values(NULL) {
		m_values = new T[size];
	}
	class iterator;
	~ring() {
		delete[]m_values;
	}

	int size() {
		return m_size;
	}

	iterator begin() {
		return iterator(0, *this);
	}

	iterator end() {
		return iterator(m_size, *this);
	}
	void add(T value) {
		m_values[m_pos] = value;
		m_pos++;

		if (m_pos == m_size) {
			m_pos = 0;
		}
	}

	T &get(int pos) {
		return m_values[pos];
	}
};


template<class T>
class ring<T>::iterator {
private:
	int m_pos;
	ring &m_ring;
public:
	iterator(): m_pos(0), m_ring(NULL) {}
	iterator(int pos, ring &aring):m_pos(pos),m_ring(aring) {
		
	}
	void print(){
		cout << "Hello from iterator" << T()<<endl;
	}

	iterator &operator++(int ) {
		m_pos++;
		return *this;
	}
	iterator &operator++() {
		m_pos++;
		return *this;
	}
	T &operator*() {
		return m_ring.get(m_pos);
	}
	bool operator!=(const iterator &other)const {
		return m_pos != other.m_pos;
	}
};