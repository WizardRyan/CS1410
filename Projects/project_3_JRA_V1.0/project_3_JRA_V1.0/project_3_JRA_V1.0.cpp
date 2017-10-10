// project_3_JRA_V1.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int nums[] = { 2, 4, 1, 3, 5};
	int numelems = 5;

	mySort(nums, numelems);

	cout << endl << endl;
	system("pause");
    return 0;
}

void mySort(int nums[], int numelems) {
	if (numelems == 0) {
		return;
	}

}


int sortHelp(int nums[], int index, int size) {
	if (size == 0) {
		return;
	}
}

