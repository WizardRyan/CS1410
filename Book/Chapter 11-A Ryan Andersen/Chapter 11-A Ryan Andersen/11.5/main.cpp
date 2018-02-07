// Author: Ryan Andersen
// Assignment: Chapter 11-A
// Instructor: Blair
// Class: CS 1410
// Date Written: 2/3/18
// Description: a program for practicing searches and sorting


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


//the binary search functions were taken from the book then modified to work with this program

#include "Header.h"

int main() {
	
	vector<Person> people = initFile();
	
	int selection;
	cout << "Select an option: " << endl << "1) Search by name" << endl << "2) Search by number" << endl << "Enter selection: ";
	cin >> selection;

	if (selection == 1) {
		string name;
		cout << "enter in the person's name (examples:  name123, name001, name023): ";
		cin >> name;

		int index = binarySearchName(people, 0, people.size(), name);

		if (index != -1) {
			cout << endl << "Name: " << people[index].name << endl << "Number: " << people[index].number << endl;
		}

		else {
			cout << "Couldn't find person by the name " << name;
		}

	}

	else if (selection == 2) {
		long long number;
		cout << "Enter the number to look up (e.g. 8011231234)";
		cin >> number;

		sort(people.begin(), people.end());

		int index = binarySearchNumber(people, 0, people.size(), number);

		if (index != -1) {
			cout << endl << "Name: " << people[index].name << endl << "Number: " << people[index].number << endl;
		}

		else {
			cout << "Couldn't find a person by the number " << number;
		}
	}
	
	else {
		cout << endl << endl << "invalid input, closing program";
	}
	cout << endl << endl;
	system("pause");
	return 0;
}