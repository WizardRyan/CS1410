// P3.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int month;
	string feb;
	cout << "Enter a month: " << endl;
	cin >> month;
	
	int thirty_one[7] = { 1, 3, 5, 7, 8, 10, 12 };
	int thirty[4] = { 4, 6, 9, 11 };
	
	for (int i = 0; i < 7; i++) {
		if (month == thirty_one[i]) {
			month = 31;
		}
		if (month == thirty[i]) {
			month = 30;
		}
	}

	cout << "there are ";
	if (month == 2) {
		cout << "28 or 29 days";
	}

	else {
		cout << month << " days in that month";
	}
	
	cout << endl << endl << endl;
	
	system("pause");
    return 0;
}

