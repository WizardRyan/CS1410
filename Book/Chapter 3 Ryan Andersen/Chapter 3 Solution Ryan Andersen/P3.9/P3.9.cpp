// P3.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	string name;
	float salary;
	float hours;
	int mins;
	const int MIN_IN_HOUR = 60;
	const int OVERTIME_MINS = MIN_IN_HOUR * 40;

	cout << "Enter in your name: " << endl;
	getline(cin, name);
	cout << "Enter in your hourly wage as a decimal: " << endl;
	cin >> salary;
	float overtimeSalary = salary * 1.5;

	cout << "Enter hours worked this week (e.g. 4.8): " << endl;
	cin >> hours;

    int  wholeHours = static_cast<int>(hours);
	int hourMin = (hours - wholeHours) * MIN_IN_HOUR;

	mins = (wholeHours * MIN_IN_HOUR) + hourMin;
	int overtime = 0;
	
	
	if (mins > (MIN_IN_HOUR * 40)) {
		overtime = mins - (MIN_IN_HOUR * 40);
		mins -= overtime;
	}

	float paycheck = (mins * (salary / 60)) + (overtime * (overtimeSalary / 60));

	cout << fixed;
	cout << setprecision(2);
	cout << name << " made $" << paycheck << " this week." << endl << endl;
	

	system("pause");
	return 0;
}

