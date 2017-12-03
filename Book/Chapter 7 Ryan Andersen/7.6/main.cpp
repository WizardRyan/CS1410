// Author: Ryan Andersen
// Assignment: Chapter 7
// Instructor: Blair
// Class: CS 1410
// Date Written: 12/2/17
// Description: a program for practicing pointers


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Header.h"

int main() {
	
	double a[] = { 1, 2, 3, 4, 100, 4, 3, 2, 1 };
	int size = 9;

	double *p = maximum(a, size);

	for (int i = 0; i < size; i++) {
		cout << a[i] << ", ";
	}

	cout << endl << "The pointer at " << p << " contains the value " << *p;


	cout << endl << endl;
	system("pause");
	return 0;
}

double* maximum(double a[], int a_size) {
	double *max = new double;
	*max = a[0];

	for (int i = 0; i < a_size; i++) {
		if (*max < a[i]) {
			*max = a[i];
		}
	}

	return max;
}