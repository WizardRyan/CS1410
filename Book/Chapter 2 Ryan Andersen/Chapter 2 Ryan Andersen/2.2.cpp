// Chapter 2 Ryan Andersen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	cout << "This program dipslays squares, cubes and fourth powers of 1-5, respectively." << endl;

	for (int i = 1; i <= 5; i++) {

		cout << i * i << " " << pow(i, 3) << " " << pow(i, 4) << " " << pow(i, 5) << endl;
	}

	cout << endl;
	system("pause");
    return 0;
}

