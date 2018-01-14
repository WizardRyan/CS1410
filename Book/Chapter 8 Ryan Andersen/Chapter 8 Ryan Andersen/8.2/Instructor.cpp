
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Instructor.h"

Instructor::Instructor(string name, string birthday, double salary) : Person::Person(name, birthday), salary{ salary } {

}



Instructor::~Instructor()
{
}

void Instructor::print() const {
	Person::print();
	cout << endl <<  "Salary: " << this->salary;

}
