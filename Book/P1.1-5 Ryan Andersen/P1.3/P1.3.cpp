// P1.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int sum = 1;

	for (int i = 1; i < 11; i++) {
		sum += i;
	}

	cout << sum << endl;

	system("PAUSE");
    return 0;
}

