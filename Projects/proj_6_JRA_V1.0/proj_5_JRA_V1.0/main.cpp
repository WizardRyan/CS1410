// Author: Ryan Andersen
// Assignment: Project 6
// Instructor: Blair
// Class: CS 1410
// Date Written: 1/20/18
// Description: a program utilizing the employee class and persistence


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Header.h"

//function explanations are in their respective headers
int main() {

	vector<Employee*> employees = { 
		new HourlyEmployee(1, "H. Potter", "Privet Drive", "201-9090", 40, 12.00), 
		new SalariedEmployee(2, "A. Dumbledore", "Hogwarts", "808-1230", 1200),
		new HourlyEmployee(3, "R. Weasley", "The Burrow", "892-2000", 40, 10),
		new SalariedEmployee(4, "R. Hagrid", "Hogwarts", "910-8765", 1000) 
	};

	cout << "Select an option: "
		<< endl << "1 - Create a data file" << endl << "or"
		<< endl << "2 - Read data from file and print paychecks"
		<< endl << "Enter desired option: ";
	int option;
	cin >> option;

	if (option == 1) {
		cout << "Enter file name to be created (e.g. file.txt): ";
		string fileName;
		cin >> fileName;
		ofstream o(fileName);
		for (auto e : employees) {
			e->write(o);
			delete e;
		}
		employees.clear();
		cout << endl << "file \"" << fileName << "\" created.";
	}

	else if (option == 2) {
		cout << "Enter file name to be read from (e.g. file.txt): ";
		string fileName;
		cin >> fileName;
		ifstream is(fileName);

		try {
			if (!is) {
				throw runtime_error("Invalid file name/file not found: \"" + fileName + "\", exiting program now");
			}
		}

		catch (runtime_error e) {
			cout << endl << e.what();
			cout << endl << endl;
			system("pause");
			return 0;
		}

		vector<Employee*> readEmployees;
		readEmployees.push_back(HourlyEmployee::read(is));
		readEmployees.push_back(SalariedEmployee::read(is));
		readEmployees.push_back(HourlyEmployee::read(is));
		readEmployees.push_back(SalariedEmployee::read(is));

		for (auto e : readEmployees) {
			e->printCheck();
		}
	}

	cout << endl << endl;
	system("pause");
	return 0;
}



