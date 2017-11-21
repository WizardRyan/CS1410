#include "Header.h"

int main() {
	int num;
	cout << "enter a number greater than 5 and less than " << 20 << " : ";
	cin >> num;

	int arr[MAX_SIZE][MAX_SIZE][MAX_SIZE];

	for (int l = 0; l < num; l++) {
		for (int j = 0; j < num; j++) {
			for (int i = 0; i < num; i++) {
				for (int k = 0; k < num; k++) {
					arr[j + l][i + l][l + k] = l + 1;
				}
			}
		}
	}

	for (int k = 0; k < num; k++) {
		for (int i = 0; i < num; i++) {
			for (int j = 0; j < num; j++) {
				cout << arr[k][i][j] << " ";
			}
			cout << endl;
		}
	}

	cout << endl << endl;
	system("pause");
	return 0;


}