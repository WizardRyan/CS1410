// Chapter 3 Solution Ryan Andersen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	string types[8] = { "Ace", "Jack", "Queen", "King", "Diamonds", "Hearts", "Spades", "Clubs"};
	string input;
	cout << "Enter in the abbreviation of your card: " << endl;
	cin >> input;
	char first = input[0];
	char second = input[1];
	
	string name;
	string type;

	for (int i = 0; i < 8; i++) {
		if (first == types[i][0]) {
			name += types[i];
		}

		if (second == types[i][0]) {
			type += types[i];
		}
	}

	if (name == "") {
		name = first;
	}


	cout << "you have a " << name << " of " << type << endl << endl;
	system("pause");
	
    return 0;
}

