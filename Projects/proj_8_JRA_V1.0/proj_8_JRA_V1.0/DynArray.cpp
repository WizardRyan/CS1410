//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "DynArray.h"

DynArray::DynArray()
{
	this->cap = 2;
	this->data = new int[this->cap];
}


DynArray::~DynArray()
{
	delete[] this->data;
}

DynArray::DynArray(int n) : cap{ n }
{
	this->data = new int[this->cap];
}

int DynArray::size() const 
{
	return this->si;
}

int DynArray::capacity() const
{
	return this->cap;
}

void DynArray::clear()
{
	delete[] this->data;
	this->cap = 2;
	this->si = 0;
	this->data = new int[this->cap];
}

void DynArray::push_back(int n)
{
	if (this->si + 1 > this->cap) {
		this->cap *= 2;
		int *newArr = new int[this->cap];
		// copy fails due to warning
		// std::copy(this->data, this->data + this->si, newArr);
		for (int i = 0; i < this->si; i++) {
			newArr[i] = this->data[i];
		}
		delete[] this->data;
		this->data = newArr;
	}

	this->data[this->si] = n;
	this->si++;
}

void DynArray::pop_back()
{
	this->si--;
}

int DynArray::at(int n)
{
	if (n < this->si) {
		return this->data[n];
	}

	else {
		throw runtime_error("Index out of bounds!");
	}
}
