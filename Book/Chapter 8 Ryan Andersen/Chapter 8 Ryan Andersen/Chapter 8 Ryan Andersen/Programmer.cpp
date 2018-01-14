//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Programmer.h"

Programmer::Programmer(string name, double salary) : Employee::Employee(name, salary) {

}

string Programmer::get_name() const{
	return Employee::get_name() + " (Programmer)";
}

Programmer::~Programmer()
{
}
