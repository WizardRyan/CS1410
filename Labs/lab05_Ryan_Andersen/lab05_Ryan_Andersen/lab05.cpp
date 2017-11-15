// Author: Ryan Andersen
// Assignment: lab 05
// Instructor: Blair
// Class: CS 1410
// Date Written: 11/7/17
// Description: a program that uses a try catch block

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"

//This function squares a number
//accepts one parameter, numP; the number to be squared
//returns a double, the squared result
double calculateSquare(double numP);

int main()
{
	double num;
	cout << "enter a number: ";
	cin >> num;

	try {
		cout << calculateSquare(num);
	}

	catch (runtime_error& e) {
		cout << e.what() << " " << num;
	}

	cout << endl << endl << endl;
	system("pause");
    return 0;
}

double calculateSquare(double numP) {
	if (numP <= 0) {
		throw runtime_error("Invalid Input: ");
	}

	else {
		return numP * numP;
	}
}

