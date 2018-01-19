// Author: Ryan Andersen
// Assignment: Project 6
// Instructor: Blair
// Class: CS 1410
// Date Written: 1/18/18
// Description: a program utilizing the employee class and persistence


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Header.h"

//function explanations are in their respective headers
int main() {

	vector<Employee*> employees;

	cout << "Select an option: " << endl
		<< "1 - create a data file" << endl
		<< "2 - read data from a file, and print paychecks" << endl
		<< ": ";
	int input;
	cin >> input;
	
	if(input == 1){
		cout << "enter in desired filename (e.g. \"file.txt\"): ";
		string fileName;
		cin >> fileName;
		ofstream o(fileName);

		Employee::write(o);

		cout << endl << "finsihed writing data to file";
	}

	else if (input == 2) {

		for (int i = 0; i < 2; i++) {
			cout << "enter in filename with employee data (e.g. \"file.txt\")" << ((i == 1) ? "(this run will fail regardless of file name): " : ": ");
			string fileName;
			cin >> fileName;

			if (i == 1) {
				fileName = "ThisIsABadFileNameTestAsSpecifiedInTheAssignmentIReallyDidn'tWantToImplementAProgramBreakingFeatureButItHadToBeDone";
			}

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

			employees = Employee::read(is);

			for (auto e : employees) {
				printCheck(*e);
			}

		}
	}


	cout << endl << endl;
	system("pause");
	return 0;
}


void printCheck(const Employee& e) {
	cout << endl << endl;
	drawChar('-', 20);
	cout << "FluffleShuffle Electronics";
	drawChar('-', 20);
	cout << endl << endl
		<< "Pay to the order of " << e.getName();
	drawChar('.', 10);
	cout << "$" << e.calcPay()
		<< endl << endl
		<< "United Bank of This Programming Project" << endl;
	drawChar('-', 68);
	cout << endl << "Hours Worked: " << e.getHoursWorked() << endl
		<< "Hourly Wage: " << e.getHourlyWage()
		<< endl << endl;
}


void drawChar(char c, int num) {
	for (int i = 0; i < num; i++) {
		cout << c;
	}
}