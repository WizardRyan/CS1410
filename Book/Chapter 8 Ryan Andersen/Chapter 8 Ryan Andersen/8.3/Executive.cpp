//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Executive.h"

Executive::Executive(string name, double salary, string department) : Manager(name, salary, department)
{
}


Executive::~Executive()
{
}

void Executive::print() const {
	cout << "--Executive--" << endl;
	Manager::print();
}