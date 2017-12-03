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

//function explanations are in header

int main() {

	double arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;

	cout << "The average of numbers ";
	for (int i = 0; i < size; i++) {
		if (i == size - 2) {
			cout << arr[i] << " and ";

		}

		else {
			cout << arr[i] << ", ";
		}
	}

	cout << endl << "is " << average(arr, size);

	cout << endl << endl;
	system("pause");
	return 0;
}


double average(double* a, int a_size) {
	double sum = 0;

	for (int i = 0; i < a_size; i++) {
		sum += *(a + i);
	}

	return sum / a_size;
}