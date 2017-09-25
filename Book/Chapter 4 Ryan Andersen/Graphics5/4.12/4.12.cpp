// Author: Ryan Andersen
// Assignment: chapter 4
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/24/17
// Description: convert integers to roman numerals

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"

// Purpose: convert digits to roman numerals
// Parameters: int n, the number being passed in, strings one five and ten to accept the desired roman numeral
// Returns: the roman numeral 
// Pre-conditions: all parameters are passed in
string roman_digit(int n, string one, string five, string ten);



int main()
{
	int n;
	string numerals;
	string ones;
	string tens;
	string hundreds;
	string thousands;


	cout << "enter in your number to be converted: ";
	cin >> n;

	ones = roman_digit(n % 10, "I", "V", "X");
	n /= 10;
	tens = roman_digit(n % 10, "X", "L", "C");
	n /= 10;
	hundreds = roman_digit(n % 10, "C", "D", "M");
	n /= 10;
	if (n != 0) {
		thousands = "M";
	}

	numerals = thousands + hundreds + tens + ones;

	cout << numerals << endl;

	system("pause");
    return 0;
}

string roman_digit(int n, string one, string five, string ten) {
	if (n == 1) { return one; }
	if (n == 2) { return one + one; }
	if (n == 3) { return one + one + one; }
	if (n == 4) { return one + five; }
	if (n == 5) { return five; }
	if (n == 6) { return five + one; }
	if (n == 7) { return five + one + one; }
	if (n == 8) { return five + one + one + one; }
	if (n == 9) { return one + ten; }
	else { return ""; }
}
