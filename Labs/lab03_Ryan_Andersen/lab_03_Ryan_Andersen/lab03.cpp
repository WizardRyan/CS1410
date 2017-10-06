// Author: Ryan Andersen
// Assignment: lab 03
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/6/17
// Description: a console program that uses recursion

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"


int main()
{
	string input;

	cout << "enter string: ";
	cin >> input;

	cout << endl << "There are " << amountA(input) << " a's" << endl << endl;

	system("pause");
    return 0;
}

int amountA(string s) {
	int count = 0;

	if (s.size() == 0) {
		return count;
	}

	if (s[0] == 'a') {
		count++;
	}

	return count + amountA(s.substr(1));
}

