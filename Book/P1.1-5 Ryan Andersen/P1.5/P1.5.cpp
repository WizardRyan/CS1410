// P1.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void line(int num, char ch) {
	for (int i = 0; i < num; i++) {
		cout << ch;
	}
	cout << endl;
}

int main()
{
	cout << " ";
	line(8, '_');
	cout << "|  " << "Ryan" << "  |" << endl << " ";
	line(8, '---');

	cout << endl << endl;

	system("PAUSE");
    return 0;
}

