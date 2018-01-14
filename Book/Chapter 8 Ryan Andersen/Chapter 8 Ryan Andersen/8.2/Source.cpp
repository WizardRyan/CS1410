// Author: Ryan Andersen
// Assignment: Chapter 8
// Instructor: Blair
// Class: CS 1410
// Date Written: 1/13/18
// Description: a program for practicing classes


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Person.h"
#include "Student.h"
#include "Instructor.h"
int main() {

	Person p("Person Boi", "100 years");
	Student s("Study Boi", "1/1/1", "CS");
	Instructor i("Teachy Boi", "2/2/2", 12323);

	p.print();
	cout << endl << endl;
	s.print();
	cout << endl << endl;
	i.print();

	cout << endl << endl;
	system("pause");
	return 0;
}