#include <iostream>
#include "DynArray.h"
#include "Lied.h"
#pragma once

using namespace std;

DynArray::DynArray() { 
	m_capacity = 2;
	m_size = 0;
	m_data = new Lied[m_capacity];

}

DynArray::DynArray(int newcapacity) {
	m_size = 0;
	m_capacity = newcapacity;
        m_data = new Lied[m_capacity];
}

DynArray::~DynArray() {
	delete[] m_data;
        m_data = NULL;
}

int DynArray::size(){
	return m_size;
}

int DynArray::capacity() {
	return m_capacity;
}

void DynArray::resize(int newcapacity) {
	Lied* copy = new Lied[newcapacity];

	for (int i = 0; i < m_size; i++)
		copy[i] = m_data[i];

	delete[] m_data;
	m_data = copy;
	delete[] copy;
}

void DynArray::push_back(Lied elem) {
	if (m_size == m_capacity)
		resize(m_size * 2);

	m_data[m_size] = elem;
	m_size++;
}

void DynArray::pop_back() {
	m_size -= 1;
}

void DynArray::erase(int index) {
	Lied* copy = new Lied[m_size - 1];
	
	for (int i = 0; i < m_size; i++) {
		if (i == index)
			continue;
		else
			copy[i] = m_data[i];
	}

	delete[] m_data;
	m_data = copy;
	delete[] copy;
        m_size--;
}

Lied& DynArray::at(int index) {
	return m_data[index];
}

void DynArray::print(){
    cout << m_size << endl;
    for (int i = 0; i < m_size; i++)
        m_data[i].ausgabe();
}

void DynArray::print(int index){
    m_data[index-1].ausgabe();
}
