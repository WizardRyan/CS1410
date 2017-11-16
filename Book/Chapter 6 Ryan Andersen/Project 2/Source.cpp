// Author: Ryan Andersen
// Assignment: chapter 6 project 2
// Instructor: Blair
// Class: CS 1410
// Date Written: 11/16/17
// Description: a program to fill a two-dimensional array

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Header.h"

int main() {
    int num;
	cout << "enter number to filled to, > 5 and < " << MAX_SIZE << " : ";
	cin >> num;

	int arr[MAX_SIZE][MAX_SIZE];
	callFillIt(arr, num);

	for (int i = 0; i < num; i++) {
		for (int k = 0; k < num; k++) {
			cout << arr[i][k];
		}
		cout << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

void callFillIt(int arr[MAX_SIZE][MAX_SIZE], int maxNum) {
	fillIt(arr, 1, 0, maxNum);
}

void fillIt(int arr[MAX_SIZE][MAX_SIZE], int num, int index, int maxNum) {
	if (num >= maxNum) {
		return;
	}
	
	for (int i = num - 1; i < maxNum; i++) {
		arr[index][i] = num;
	}

	fillIt(arr, num + 1, index + 1, maxNum);
}