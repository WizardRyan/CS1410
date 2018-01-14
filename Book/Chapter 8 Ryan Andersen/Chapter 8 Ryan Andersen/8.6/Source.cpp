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

#include "HourlyWorker.h"
#include "SalariedWorker.h"

int main() {
	
	SalariedWorker s("Salary Boi", 10);
	HourlyWorker h("Hourly Boi", 10);

	cout << "Salaried: " << s.compute_pay(50) <<
		endl << "Hourly: " << h.compute_pay(50);

	cout << endl << endl;
	system("pause");
	return 0;
}