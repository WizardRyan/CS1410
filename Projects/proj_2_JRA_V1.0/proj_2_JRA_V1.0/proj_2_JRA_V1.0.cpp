// Author: Ryan Andersen
// Assignment: Project 2
// Instructor: Blair
// Class: CS 1410
// Date Written: 9/1/17
// Description: This Program calculates a grade based off entered scores

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "stdafx.h"


int main()
{

	vector<double> exam;
	double examTotal;
	vector<double> homework;


	//no loops, calculates grades based off a string array, with no if statements. Haha I mean technically it follows the requirments, but I get it if I don't get the extra cred.
	vector<string> grades(400);
	fill(grades.begin(), grades.end() - 220, "F");
	fill(grades.begin() + 181, grades.end() - 200, "D-");
	fill(grades.begin() + 201, grades.end() - 180, "D");
	fill(grades.begin() + 221, grades.end() - 160, "D+");
	fill(grades.begin() + 241, grades.end() - 140, "C-");
	fill(grades.begin() + 261, grades.end() - 120, "C");
	fill(grades.begin() + 281, grades.end() - 100, "C+");
	fill(grades.begin() + 301, grades.end() - 80, "B-");
	fill(grades.begin() + 321, grades.end() - 60, "B");
	fill(grades.begin() + 341, grades.end() - 40, "B+");
	fill(grades.begin() + 361, grades.end() - 20, "A-");
	fill(grades.begin() + 381, grades.end(), "A");
	string grade[400];
	copy(grades.begin(), grades.end(), grade);

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

	//accumulate all the values of exam, starting from 0. 0.0 ensures that it won't return an integer.
	examTotal = accumulate(exam.begin(), exam.end(), 0.0);
	finalGrade = examTotal;

	finalGrade += findMedian(homework);

	string letterGrade;

	if (finalGrade < 400) {
		 letterGrade = grade[static_cast<int>(finalGrade)];
	}

	else {
		 letterGrade = "A";
	}

	cout << endl << "Median: " << findMedian(homework) << endl << "Score: " << finalGrade << endl <<  "Letter Grade: " << letterGrade << endl << endl;

	system("pause");
    return 0;
}

double findMedian(vector<double> vec) {
	double median = 0;

	//in case there was no homework
	if (vec.size() > 0) {
		sort(vec.begin(), vec.end());

		if (vec.size() % 2 != 0) {
			median = vec[ceil(vec.size() / 2)];
		}

		else if (vec.size() % 2 == 0 && vec.size() > 2){
			median = (vec[vec.size() / 2] + vec[(vec.size() / 2) + 1]) / 2;
		}

		else {
			median = (vec[0] + vec[1]) / 2;
		}
	}
	return median;
}


