// P1.1-5 Ryan Andersen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	string input;

	cout << "Hello, my name is Hal!" << endl;
	cout << "What would you like me to do?" << endl;
	getline(cin, input);
	cout << "Sorry, no can do." << endl << endl;

	system("PAUSE");
    return 0;
}

