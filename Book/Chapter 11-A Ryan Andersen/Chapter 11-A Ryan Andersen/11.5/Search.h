//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include "Person.h"
#include <vector>
#include <algorithm>

using namespace std;

//the operator function, overloads the "<" operator when comparing persons to check their number
//accepts a, a person, and b a person to be compared
//returns a bool, true if person a is less than person b
bool operator<(const Person& a, const Person& b);

//the binarySearchName function, searches through a vector to find a matching person by name
//accepts v, the person vector to search through, from, where to start from, to, where to search to, and value, the string to search for
//return the index of the matching value
int binarySearchName(vector<Person> v, int from, int to, string value);

//the binarySearchNumber function, searches through a vector to find a matching person by number
//accepts v, the person vector to search through, from, where to start from, to, where to search to, and value, the number to search for
//return the index of the matching value
int binarySearchNumber(vector<Person> v, int from, int to, long long value);

