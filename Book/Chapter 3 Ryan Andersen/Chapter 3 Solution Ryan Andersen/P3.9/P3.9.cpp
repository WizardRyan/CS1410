// P3.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	string name;
	float salary;
	float hours;
	float minutes;
	const int MIN_IN_HOUR = 60;
	const int OVERTIME_MINS = MIN_IN_HOUR * 40;

	cout << "Enter in your name: " << endl;
	getline(cin, name);
	cout << "Enter in your hourly wage, as a decimal: " << endl;
	cin >> hours;


    return 0;
}

