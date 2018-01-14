//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Manager.h"

Manager::Manager(string name, double salary, string department) : Employee(name, salary), department{ department }
{
}


Manager::~Manager()
{
}

void Manager::print() const {
	cout << "Name: " << this->get_name() << endl << "Salary: " << this->get_salary() << endl << "Department: " << this->department;
}
