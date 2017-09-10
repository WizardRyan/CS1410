// 2.21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	string name; 
	double salary;

	cout << "What is your name?" << endl;
	getline(cin, name);
	cout << "what is your salary?" << endl;
	cin >> salary;

	salary *= 1.05;

	cout << endl << endl << name << endl;
	cout << salary << endl;

	system("pause");


    return 0;
}

