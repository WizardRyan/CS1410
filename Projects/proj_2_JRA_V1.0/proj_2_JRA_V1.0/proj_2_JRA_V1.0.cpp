// Author: Ryan Andersen
// Assignment: Project 2
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/1/17
// Description: This Program calculates the median of entered grades

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "stdafx.h"


int main()
{

	vector<double> exam;
	vector<double> homework;
	string grades[] = { "A", "A-", "B", "B-", "C", "C-", "D", "D-", "F" };
	double input = 0;
	double finalGrade = 0;

	for (int i = 1; i < 4; i++) {

		cout << "enter in exam # " << i << " : ";

		do {
			if (!cin) {
				cout << "bad input, enter in a decimal or integer for exam " << i << " : ";
				cin.clear();
				cin.ignore(80, '\n');
			}

		} while (!(cin >> input));

			if (cin.good()) {
				exam.push_back(input);
			}
		}

	cout << endl;

	do {

		if ((!cin) && !(cin.eof())) {
			cout << endl << "invalid input, enter in score as a decimal or integer: ";
			cin.clear();
			cin.ignore(100, '\n');
		}

		else {
			cout << "enter in homwework score, press Ctrl-Z to stop: ";
			homework.push_back(input);
		}

	} while ((cin >> input) || !(cin.eof()));

	//get rid of the input taken in from the previous stream (wanted to see if there was a way out of this without syncing the stream or declaring another input var)
	rotate(homework.begin(), homework.begin()+ 1, homework.end());
	homework.pop_back();



	system("pause");
    return 0;
}

double findMedian(const vector<double>& vec) {
	double median;


	if (vec.size() % 2 != 0) {
		median = vec[ceil(vec.size() / 2)];
	}

	else {
		median = (vec[vec.size() / 2] + vec[(vec.size() / 2) + 1]) / 2;
	}
}


