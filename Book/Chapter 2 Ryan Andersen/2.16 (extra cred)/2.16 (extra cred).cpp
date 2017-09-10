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
	string again = "y";


	while (again == "y") {

		cout << "enter your time in 24 hour format, for example 01344" << endl
		     << "enter your first time: ";
		cin >> first;
		cout << "enter your second time: ";
		cin >> second;

		//split time into minutes
		firstHour = first / 100;
		firstMin = first % 100 + firstHour * 60;
		secondHour = second / 100;
		secondMin = second % 100 + secondHour * 60;



		if (first > second) {
			diff = firstMin - secondMin;
			diff = 1440 - diff; //1400 minutes in a day
		}

		else {
			diff = secondMin - firstMin;
		}

		hours = diff / 60;
		min = diff % 60;
	
		cout << endl << hours << " hours " << min << " minutes" << endl << endl;

		cout << "Continue? y/n: ";
		cin >> again;
		cout << endl << endl;
	}
    return 0;
}

