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


//function explanations are in the header

#include "Header.h"

int main() {
    int num;
	//any more than 20 and I get a stack overflow... whew lad
	cout << "enter number greater than 5 and less than 20" << " : ";
	cin >> num;

	WrapArray arr = callFillIt(num);

	for (int i = 0; i < num; i++) {
		for (int k = 0; k < num; k++) {
			cout << arr.nums[i][k] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

WrapArray callFillIt(int maxNum) {
	WrapArray ar = { 0 };

	return fillIt(ar, 0, 0, maxNum);
}

WrapArray fillIt(WrapArray arr, int num, int index, int maxNum) {
	if (num >= maxNum) {
		return arr;
	}
	WrapArray newArr = arr;

	for (int k = 0; k < maxNum; k++) {
		for (int i = 0; i < maxNum; i++) {
			newArr.nums[k + index][i + num] = num + 1;
		}
	}

	fillIt(newArr, num + 1, index + 1, maxNum);
}