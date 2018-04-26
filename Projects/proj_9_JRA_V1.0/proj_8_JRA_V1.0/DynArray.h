//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <algorithm>
#include <stdexcept>
using namespace std;

template <class T>
class DynArray
{
public:
	DynArray();
	~DynArray();
	DynArray(int n);
	
	// the size and capacity functions, get the size or capacity of the DynArray, respectively
	// no parameters
	// returns an int containing their respective value
	int size() const;
	int capacity() const;

	// the clear function, resets a DynArray (deletes array, sets cap to 2 and size to 0)
	// no parameters
	// no return
	void clear();

	// the push_back function, adds a new value to the array and increments size. If size will exceed capacity, increase DynArray size
	// accepts n, the element to be added
	// no return
	void push_back(T n);

	// the pop_back function, remove last element from array and decrease size by one
	// no parameters
	// no return
	void pop_back();

	// the at function, returns value at given index. If no element, throw runtime error.
	// accepts i, the index to attempt to access
	// returns an int, the element that was selected.
	int at(int n);

	// the back function, returns the last element in the DynArray by reference, without removing that element
	// no parameters
	// returns the last value in the array by reference
	T& back();

	// the front function, returns the first element in an array by reference, without removing that element
	// no parameters
	// returns the first element in the array by reference
	T& front();

	// overload the [] operator to work 
	// accepts an int, the index to access
	// returns the element at that index
	T& operator[](int n);

	// copy constructor, performs a deep copy of all the data in a DynArray
	// accepts reference to an object to be copied
	// returns itself
	DynArray(const DynArray& right);

	// overloaded assignment operator, performs a deep copy of all the data in a DynArray
	// accepts reference to an object to be copied
	// returns itself
	DynArray& operator=(const DynArray& right);

private:
	int si = 0;
	int cap = 0;
	T *data = nullptr;
};

template <class T>
DynArray<T>::DynArray()
{
	this->cap = 2;
	this->data = new T[this->cap];
}

template <class T>
DynArray<T>::~DynArray()
{
	delete[] this->data;
}

template <class T>
DynArray<T>::DynArray(int n) : cap{ n }
{
	this->data = new T[this->cap];
}

template <class T>
int DynArray<T>::size() const
{
	return this->si;
}

template <class T>
int DynArray<T>::capacity() const
{
	return this->cap;
}

template <class T>
void DynArray<T>::clear()
{
	delete[] this->data;
	this->cap = 2;
	this->si = 0;
	this->data = new T[this->cap];
}

template <class T>
void DynArray<T>::push_back(T n)
{
	if (this->si + 1 > this->cap) {
		this->cap *= 2;
		T *newArr = new T[this->cap];
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

template <class T>
void DynArray<T>::pop_back()
{
	this->si--;
}

template <class T>
int DynArray<T>::at(int n)
{
	if (n < this->si) {
		return this->data[n];
	}

	else {
		throw runtime_error("Index out of bounds!");
	}
}

template <class T>
T& DynArray<T>::back() {
	if (this->si == 0)
		throw runtime_error("There are no values in the array!");
	return this->data[this->si - 1];
}

template <class T>
T& DynArray<T>::front() {
	if (this->si == 0)
		throw runtime_error("There are no values in the array!");
	return this->data[0];
}

template <class T>
T& DynArray<T>::operator[](int n) {
	if (n < this->si) {
		return this->data[n];
	}

	else {
		throw runtime_error("Index out of bounds!");
	}
}

template <class T>
DynArray<T>::DynArray(const DynArray& right) {
	if (this != &right)
	{
		delete[] this->data;
		this->si = right.size();
		this->cap = right.capacity();
		this->data = new T[this->cap];
		for (int i = 0; i < this->si; i++)
			this->data[i] = right.data[i];
	}
}

template <class T>
DynArray<T>& DynArray<T>::operator=(const DynArray& right) {
	if (this != &right)
	{
		delete[] this->data;
		this->si = right.size();
		this->cap = right.capacity();
		this->data = new T[this->cap];
		for (int i = 0; i < this->si; i++)
			this->data[i] = right.data[i];
	}
	return *this;
}