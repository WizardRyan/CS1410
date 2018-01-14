
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once

#include <string>
#include <iostream>
using namespace std;

class Person
{
public:
	Person(string name, string birthday);
	~Person();

	//prints the name and birthday of the Person object
	//accepts no parameters
	//no return
	void virtual print() const;

protected:
	string name;
	string birthday;
};

