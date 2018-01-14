//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include "Employee.h"
class Programmer :
	public Employee
{
public:
	Programmer(string name, double salary);

	//the get_name function, return the name of the programmer, along with the title programmer
	//accepts no parameters
	//no return
	string get_name() const;

	~Programmer();
};

