// print_initial_Ryan_Andersen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char scores[6][6] = {
		{'*', '*', '*', ' ', ' ', ' ' },
		{'*', ' ', '*', ' ', ' ', ' '},
		{'*', '*', '*', ' ', ' ', ' '},
		{'*', '*', ' ', ' ', ' ', ' '},
		{'*', ' ', '*', ' ', ' ', ' '},
		{'*', ' ', ' ', '*', ' ', ' '}
	};

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << scores[i][j];
			cout << ' ';
		}
		cout << endl;
	}

	system("pause");
    return 0;
}

