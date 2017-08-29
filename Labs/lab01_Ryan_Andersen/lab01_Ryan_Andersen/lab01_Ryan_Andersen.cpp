// lab01_Ryan_Andersen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//the rest of the headers are in the stdafx.h, to speed up subsequent compile times. If you prefer me to do it the way the lab does, or have any other complaints, please let me know.

int main()
{
	int age;
	float value;
	string name;
	int dollars;
	int cents;

	cout << "What is your age?" << endl;
	cin >> age;
	cout << endl << "How much money do you have?" << endl;
	cin >> value;
	cout << endl << "What is your full name?" << endl;
	cin.ignore();
	getline(cin, name);

	//why not
	dollars = (int)value;
	cents = (int)((value - dollars) * 100);

	cout.precision(2);
	cout.fixed;

	cout << endl << endl
		<< "Hello, " << name << endl
		<< "You are " << age << " Years old" << endl
		<< "And you have " << dollars << " dollars" << " and " << cents << " cents " << "($" << dollars << "." << cents << ")" << endl << endl;

	system("PAUSE");
		
    return 0;
}

