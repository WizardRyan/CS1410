// project_3_JRA_V1.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>

using namespace std;


int main() {

	int arr[] = { 4, 1, 3, 2, 5 };
	int n = 5;



	Sort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i];
	}

	cout << endl << endl;
	system("pause");
	return 0;
}

void Sort(int arr[], int n)
{
	if (n == 1) {
		return;
	}

	sortHelp(arr, 0, n);

	Sort(arr, n - 1);
}

void sortHelp(int arr[], int index, int size) {
	if (size == 1) {
		return;
	}
	if (arr[index] > arr[index + 1]) {
		swap(arr[index], arr[index + 1]);
	}
	sortHelp(arr, index + 1, size - 1);
}

