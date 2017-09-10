// 2.16 (extra cred).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int first;
	int second;
	int firstHour;
	int firstMin;
	int secondMin;
	int secondHour;


	int diff;
	int hours;
	int min;

	cout << "enter your time in 24 hour format, for example 01344" << endl;
	cout << "enter your first time: ";
	cin >> first;
	cout << "enter your second time: ";
	cin >> second;

	if (first > second) {
		firstHour = first / 100;
		firstMin = first % 100 + firstHour * 60;
		secondHour = second / 100;
		secondMin = second % 100 + secondHour * 60;

		diff = firstMin - secondMin;

		hours = diff / 60;
		hours = 23 - hours; //flip the usual calcuation

		min = diff % 60;


	}

	else {
		firstHour = first / 100;
		firstMin = first % 100 + firstHour * 60;
		secondHour = second / 100;
		secondMin = second % 100 + secondHour * 60;

		diff = secondMin - firstMin;

		hours = diff / 60;
		min = diff % 60;
	}

	cout << endl << hours << " hours " << min << " minutes" << endl;


	system("pause");
    return 0;
}

