// proj_1_JRA_V1.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	double tax = 0;
	double income = 1;
	bool single = false;
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
		

	}


    return 0;
}

