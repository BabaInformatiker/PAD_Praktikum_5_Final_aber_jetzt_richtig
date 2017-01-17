#pragma once

class Lied;

class DynArray
{
private:
	void resize(int newCapacity);
	DynArray(const DynArray& other); //Kopierkonstruktor soll explizit *nicht* aufgerufen werden
	Lied* m_data;
	int m_size;
	int m_capacity;

public:
	DynArray();
	DynArray(int newCapacity); //Weiterer Konstruktor
	~DynArray(); //Destruktor, muss implementiert werden

	Lied& at(int index);

	void push_back(Lied elem);
	void pop_back();
	void erase(int index);

	int size();
	int capacity();

	void print();
        void print(int index);
};

