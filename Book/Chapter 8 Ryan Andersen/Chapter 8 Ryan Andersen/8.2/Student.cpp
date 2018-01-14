
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Student.h"

Student::Student(string name, string birthday, string major) : Person::Person(name, birthday), major{ major } {
}



Student::~Student()
{
}

void Student::print() const {
	Person::print();
	cout << endl << "Major: " << this->major;
}