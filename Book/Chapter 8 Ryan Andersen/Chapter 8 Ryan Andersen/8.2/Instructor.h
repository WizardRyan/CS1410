//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include "Person.h"
class Instructor :
	public Person
{
public:
	Instructor(string name, string birthday, double salary);
	~Instructor();

	//prints the name, birthday, and salary of the Instructor object
	//accepts no parameters
	//no return
	void virtual print() const;


private:
	double salary;
};

