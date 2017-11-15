// Author: Ryan Andersen
// Assignment: lab 06
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/26/17
// Description: a console program for file IO

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Header.h"

int main() {
	const int SIZE = 100;
	string strVoltages[SIZE];
	double voltages[SIZE];
	double average = 0;
	int amount = 0;

	ifstream istream("voltages.txt");


	for (int i = 0; i < SIZE; i++) {
		if (!istream.fail() && !istream.eof()) {
			getline(istream, strVoltages[i]);

			try {
				voltages[i] = stod(strVoltages[i]);
				cout << voltages[i] << endl;
				amount++;
			}

			catch(invalid_argument e){
				//if the conversion fails, it was bad input or eof
			}
		}
	}

	for (int i = 0; i < amount; i++) {
		if (voltages[i] != 0) {
			average += voltages[i];
		}
	}

	average /= amount;

	cout << "the average voltage is: " << average;

	cout << endl << endl;
	system("pause");
	return 0;
}