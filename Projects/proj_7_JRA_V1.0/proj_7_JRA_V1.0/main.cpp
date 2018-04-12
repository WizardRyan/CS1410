// Author: Ryan Andersen
// Assignment: Project 7
// Instructor: Blair
// Class: CS 1410
// Date Written: 4/12/18
// Description: a program for implementing operator overloading


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "Fraction.h"

int main() {
	cout << "a will be initialized as 4 / -6, and is automatically optimized." << endl
		<< "Fractions are optimized after each operation." << endl
		<< "The post and pre increment/decrement operators add and subract 1" << endl << endl;

	Fraction a(4, -6);
	Fraction b(15, 30);

	cout << "a = " << a << endl;
	a++;
	cout << "a++: " << a << endl;

	++a;
	cout << "++a: " << a << endl;

	a--;
	cout << "a--: " << a << endl;

	--a;
	cout << "--a: " << a << endl << endl;


	cout << "b = 15 / 30, but will be optimized to 1/2 when initialized" << endl << endl
		<< "b = " << b << endl
		<< "a = " << a << endl << endl
		<< "a * b: " << a * b << endl
		<< "a / b: " << a / b << endl
		<< "a + b: " << a + b << endl
		<< "a - b: " << a - b << endl
		<< "a == b: " << (a == b ? "true" : "false") << endl
		<< endl 
		<< "Fraction will not print denominator when denominator is 1" << endl
		<< "a + 2/3: " << a + Fraction(2, 3) << endl

		<< endl << "Trying to initialize fraction 314 / 0 " << endl;


	try {
		Fraction thisFractionSucks(314, 0);
	}

	catch(runtime_error e){
		cout << "Error: " << e.what();
	}

	cout << endl << endl;
	system("pause");
	return 0;
}