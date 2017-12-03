// Author: Ryan Andersen
// Assignment: Chapter 7
// Instructor: Blair
// Class: CS 1410
// Date Written: 12/2/17
// Description: a program for practicing pointers


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Header.h"
#include "ccc_empl.h"

int main() {
	vector<Employee> employees;
	string input;
	int num = 0;

	do {
		input = "";
		string name;
		double salary;
		
		cout << "press q to quit" << endl;
		//let me know if you want me to re-write this to parse through an employee's full name,
		//The assignment details didn't explicitly specify it, and I figured the point was to get practice with pointers, so I didn't bother.
		cout << "Enter in Employee's last name: ";
		cin >> input;

		if (input != "q") {
			name = input;

			cout << "Enter Employee's salary: ";
			cin >> salary;
			cout << endl;

			Employee *employee = new Employee(name, salary);
			if (num > 0) {
				if (employee->get_name() == employees[num - 1].get_name()) {
					employee->account = employees[num - 1].account;
				}

				else {
					employee->account = new BankAccount();
				}
			}

			else {
				employee->account = new BankAccount();
			}
			employees.push_back(*employee);
			employees[num].account->deposit(employees[num].get_salary() / 12);
			num++;
		}
	} while (input != "q");

	cout << endl << endl;

	for (Employee const& e : employees) {
		cout << "Employee: " << e.get_name() << endl
			<< "Account Balance: " << e.account->getBalance() << endl << endl;
	}

	for (int i = 0; i < employees.size() ; i++) {
		if (i > 0) {
			if (employees[i].get_name() != employees[i - 1].get_name()) {
				delete employees[i].account;
				employees[i].account = NULL;
				cout << employees[i].get_name() << "'s account deleted" << endl;
			}

			else {
				cout << employees[i].get_name() << "'s account (duplicate) already deleted" << endl;
			}
		}

		else {
			delete employees[i].account;
			employees[i].account = NULL;
			cout << employees[i].get_name() << "'s account deleted" << endl;
		}
	}

	cout << endl << endl;
	system("pause");
	return 0;
}