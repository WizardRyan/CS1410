#include "stdafx.h"

int main() {
	string input;
	cout << "Hello, my name is Hal!" << endl;
	cout << "What is your name?" << endl;
	getline(cin, input);
	cout << "Hello " << input << ", good to see ya!" << endl;

	system("PAUSE");
	return 0;
}
