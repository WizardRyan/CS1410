#include "DynArray.h"



DynArray::DynArray()
{
	this->cap = 2;
}


DynArray::~DynArray()
{
}

DynArray::DynArray(int n) : cap{ n }
{
}

int DynArray::size() const 
{
	return this->si;
}

int DynArray::capacity() const
{
	return this->cap;
}
