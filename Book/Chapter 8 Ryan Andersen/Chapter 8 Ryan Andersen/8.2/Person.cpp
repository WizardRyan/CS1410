
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Person.h"

Person::Person(string name, string birthday) : birthday{ birthday }, name{ name }
{
}


Person::~Person()
{
}

void Person::print() const {
	cout << "Name: " << this->name << endl << "Birthday: " << this->birthday;
}