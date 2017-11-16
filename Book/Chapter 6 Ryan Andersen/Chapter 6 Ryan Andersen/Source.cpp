// Author: Ryan Andersen
// Assignment: chapter 6 project 1
// Instructor: Blair
// Class: CS 1410
// Date Written: 11/16/17
// Description: a program to reverse my name

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

//function headers are located in the headers file

#include "Header.h"

int main() {
	char nameArr[] = "Ryan Andersen";
	cout << reverseIt(nameArr).name;
	cout << endl << endl;
	system("pause");
	return 0;
}

charArr reverseIt(char arr[]) {
	//convert to string and reverse it
	string name = string(arr);
	reverse(name.begin(), name.end());
	charArr arry;
	//convert back to character array, and copy it to the charArry struct
	strcpy_s(arry.name, name.c_str());
	return arry;
}