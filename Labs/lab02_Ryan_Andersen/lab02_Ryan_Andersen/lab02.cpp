// Author: Ryan Andersen
// Assignment: lab 02
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/28/17
// Description: a program that takes 5 inputs and lists the sum.

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"


int main()
{

	vector<double> dubVec;
	double dubArr[5];
	double input;

	for (int i = 0; i < 5; i++) {
		cout << "enter in a value: ";
		cin >> input;
		dubVec.push_back(input);

		dubArr[i] = dubVec[i]; //may as well do it in the same loop
	}

	cout << fixed << setprecision(2) << endl << "the sum is " << sumArr(dubArr) << endl;

	system("pause");
    return 0;
}

double sumArr(double a[]) {
	double sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += a[i];
	}

	return sum;
}