// Author: Ryan Andersen
// Assignment: Chapter 4
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/1/17
// Description: Convert numbers into bar codes

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"


// Purpose: return barcode equivalent of number
// Parameters: char ch, the char of the number being passed in
// Returns: a string of the barcode
// Pre-conditions: a char is passed in
string getCode(char ch);

int main()
{
	string barcode = "|";
	string input;
	int checkDiv;

	cout << "enter your zipcode: ";
	cin >> checkDiv;
	input = to_string(checkDiv);

	for (int i = 0; i < input.length() - 1; i++) {
		barcode += getCode(input[i]);
	}

	if (checkDiv % 10 != 0) {
		barcode += ":::||";
	}

	barcode += "|";

	cout << barcode;

	cout << endl << endl;
	system("pause");
    return 0;
}

string getCode(char ch) {
	if (ch =='1') { return ":::|||"; }
	if (ch =='2') { return "::|:|"; }
	if (ch =='3') { return "::||:"; }
	if (ch =='4') { return ":|::|"; }
	if (ch =='5') { return ":|:|:"; }
	if (ch =='6') { return ":||::"; }
	if (ch =='7') { return "|:::|"; }
	if (ch =='8') { return "|::|:"; }
	if (ch =='9') { return "|:|::"; }
	if (ch =='0') { return "||:::"; }
	else {
		return "";
	}
}