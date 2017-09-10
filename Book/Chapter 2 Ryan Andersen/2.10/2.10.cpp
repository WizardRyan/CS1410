// 2.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	double gas;
	double mpg;
	double price;

	cout << "How many gallons of gas do you have? " << endl;
	cin >> gas;
	cout << "What is your miles per a gallon?" << endl;
	cin >> mpg;
	cout << "What is the cost per a gallon?" << endl;
	cin >> price;

	cout << fixed << setprecision(2);
	cout << "You can go " << mpg * gas << " miles with how much gas you have in the tank, and it costs $" << 100 / mpg * price << " to go 100 miles." << endl;

	system("pause");
    return 0;
}

