// Author: Ryan Andersen
// Assignment: Project 3
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/11/17
// Description: a program containing a recursive bubble sort, and a binary search guessing game

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h" //function prototypes and explanations are stored here
#include <iostream>
using namespace std;


int main() {

	int arr[] = { 5, 4, 3, 2, 1 };
	int n = 5;

	Sort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}

	cout << endl << endl;

	hilo(100);

	cout << endl << endl;
	system("pause");
	return 0;
}

void Sort(int arr[], int n)
{
	if (n == 1) {
		return;
	}

	sortHelp(arr, 0, n);

	Sort(arr, n - 1);
}

void sortHelp(int arr[], int index, int size) {
	if (size == 1) {
		return;
	}
	if (arr[index] > arr[index + 1]) {
		swap(arr[index], arr[index + 1]);
	}
	sortHelp(arr, index + 1, size - 1);
}

void hiloHelp(int first, int last) {

	int guess = (last + first) / 2;

	(last == first) ? cout << "Your number is " << guess << " (or you cheated)" : cout << "Is it " << guess << "? (l, y, h): ";

	string response;
	cin >> response;
	
	if (response == "y") {
		cout << "Yeet, got the number" << endl;
		return;
	}

	if (response == "l") {
		hiloHelp(guess + 1, last);
	}

	if (response == "h") {
		hiloHelp(first, guess - 1);
	}
};

void hilo(int size) {
	cout << "think of number between 1 and " << size << endl;
	hiloHelp(1, size);

};

