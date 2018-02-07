//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Search.h"

bool operator<(const Person& a, const Person& b)
{
	return a.number < b.number;
}

int binarySearchName(vector<Person> v, int from, int to, string value)
{
	if (from > to)
		return -1;
	int mid = (from + to) / 2;

	const char* nameArr = v[mid].name.c_str();
	const char* valueArr = value.c_str();

	if (v[mid].name == value)
		return mid;
	else if (strcmp(nameArr, valueArr) < 0)
		return binarySearchName(v, mid + 1, to, value);
	else
		return binarySearchName(v, from, mid - 1, value);
}

int binarySearchNumber(vector<Person> v, int from, int to, long long value)
{
	if (from > to)
		return -1;
	int mid = (from + to) / 2;
	if (v[mid].number == value)
		return mid;
	else if (v[mid].number < value)
		return binarySearchNumber(v, mid + 1, to, value);
	else
		return binarySearchNumber(v, from, mid - 1, value);
}
