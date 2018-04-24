//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once

// the pair class, holds a pair of data members.
template <class T>
class Pair
{
public:

	Pair(T o1, T o2);

	// The getFirst and getSecond functions, return the first and second data member passed into the constructor, respectivley
	// no parameters
	// returns a generic variable, whatever type the user passed in
	T getFirst();
	T getSecond();

private:
	T first;
	T second;
};

template<class T>
Pair<T>::Pair(T o1, T o2) : first{o1}, second{ o2 }
{
}

template<class T>
T Pair<T>::getFirst()
{
	return this->first;
}

template<class T>
T Pair<T>::getSecond()
{
	return this->second;
}

