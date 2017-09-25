// Author: Ryan Andersen
// Assignment: 4.2
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/24/17
// Description: switches numbers based on value

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"

// Purpose: swaps the value of numbers if the first parameter is greater
// Parameters: the first and second values, a and b
// Returns: none, it is a procedure
// Pre-conditions: integers are provided
// Post-conditions: integer values may be switched
void swap_if_greater(int& a, int& b);

void print(int a, int b);

void printAll(int a, int b);

int main()
{
	string cont;

	do {
		cont = "";
		int a, b;
		cout << "enter two numbers, then y or n for if you want to run it again, for example, 3 5 y: ";
		cin >> a >> b >> cont;
		printAll(a, b);
		cout << endl;
	} while (cont == "y");


	cout << endl << endl;
	system("pause");
    return 0;
}

void swap_if_greater(int& a, int& b) {
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
}

void print(int a, int b) {
	cout << "a = " << a << " and b = " << b << endl;
}

void printAll(int a, int b) {
	int c = a;
	int d = b;

	print(c, d);
	swap_if_greater(c, d);
	_sleep(500);
	cout << "The function has been applied. " << endl;
	print(c, d);
}
