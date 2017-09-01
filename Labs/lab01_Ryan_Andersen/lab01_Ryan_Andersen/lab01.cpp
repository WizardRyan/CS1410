// Author: Ryan Andersen
// Assignment: lab 01
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/1/17
// Description: a simple console program for user input and output

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"
//the rest of the headers are in the stdafx.h, to speed up subsequent compile times. If you prefer me to do it the way the lab does, or have any other complaints, please let me know.

int main()
{
	string name;

	cout << "Hello, my name is Hal, what is your name?" << endl;
	getline(cin, name);
	cout << "Welcome to C++, " << name << " let the adventure begin!" << endl << endl;

	system("PAUSE");
		
    return 0;
}

