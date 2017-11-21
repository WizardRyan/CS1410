// Author: Ryan Andersen
// Assignment: Project 4
// Instructor: Blair
// Class: CS 1410
// Date Written: 11/20/17
// Description: a program demonstrating use of an employee class

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

//function explanations are in their respective header files

#include "Employee.h"
#include "mainHeader.h"

int main() {
	Employee dude(1295144, "Mr.Timn", "1243 Cool Street", "801-111-1111", 10, 45);
	Employee dudette(453233, "Mrs.Timn", "1243 Cool Street", "801-111-1112", 12.5, 30);
	
	printCheck(dude);
	printCheck(dudette);

	cout << endl << endl;
	system("pause");
	return 0;
}


void printCheck(const Employee& e) {
	cout << endl << endl;
	drawChar('-', 20);
	cout << "FluffleShuffle Electronics";
	drawChar('-', 20);
	cout << endl << endl
		 << "Pay to the order of " << e.getName();
	drawChar('.', 10);
	cout << e.calcPay();
	cout << endl << endl
		<< "United Bank of This Programming Project" << endl;
	drawChar('-', 68);


}


void drawChar(char c, int num) {
	for (int i = 0; i < num; i++) {
		cout << c;
	}
}