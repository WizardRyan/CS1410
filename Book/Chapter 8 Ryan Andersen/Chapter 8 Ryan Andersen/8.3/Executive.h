//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include "Manager.h"
class Executive :
	public Manager
{
public:
	Executive(string name, double salary, string department);
	~Executive();

	//prints the name, salary, and department of the Manager object, with the addition of the title executive
	//accepts no parameters
	//no return
	void virtual print() const;
};

