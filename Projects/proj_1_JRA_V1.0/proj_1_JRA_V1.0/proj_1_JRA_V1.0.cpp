// Author: Ryan Andersen
// Assignment: Project 01
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/21/17
// Description: a tax calculator

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "stdafx.h"


int main()
{
	double tax = 0;
	double income = 1;
	int subtract = 0;
	int add = 0;
	double tax_rate = 0;

	string joint_status;
	string input = "y";
	bool correctM = true;
	while (input == "y") {

		cout << "enter your taxable income: ";

		do {
			if (!cin || income + abs(income) == 0 ){
				cout << endl << "bad input, enter it now as a positive decimal, like 1042.43: ";
				cin.clear();
				cin.ignore(80, '\n');
			}

		} while (!(cin >> income) || (income + abs(income)) == 0);

		do {
			input = "";
			cout << endl << "enter in an \"m\" or \"s\" for filing single or joint: ";
			cin >> input;

			if ( input != "m" && input != "s"){
				correctM = false;
				cin.ignore(80, '\n');
			}

			else {
				correctM = true;
			}

		} while (correctM == false);
		

		if (input == "s") {
			joint_status = "single";
			if (income < 864) {
				subtract = 0;
				tax_rate = .023;
				add = 0;
			}

			else if ( income < 2589 ) {
				subtract = 863;
				tax_rate = .033;
				add = 25;
			}

			else if (income < 4314) {
				subtract = 2588;
				tax_rate = .052;
				add = 85;
			}

			else if (income > 4313) {
				subtract = 4313;
				tax_rate = .075;
				add = 181;
			}
		}

		else {
			joint_status = "joint";
			if (income < 1728) {
				subtract = 0;
				tax_rate = .033;
				add = 0;
			}

			else if (income < 5177) {
				subtract = 1726;
				tax_rate = .033;
				add = 40;
			}

			else if (income < 8627) {
				subtract = 5176;
				tax_rate = .052;
				add = 175;
			}

			else if (income > 8626) {
				subtract = 8626;
				tax_rate = .075;
				add = 390;
			}
		}

		tax = ((income - subtract) * tax_rate) + add;
		cout << fixed << setprecision(2);
		cout << endl << "With $" << income << " of taxable income and a " << joint_status << " return, " << endl << "your income tax will be: " << tax << endl << endl;
		
		cout << "Would you like to go again? (y/n): ";
		cin >> input;
	}

	cout << endl << endl;
	system("pause");
    return 0;
}

