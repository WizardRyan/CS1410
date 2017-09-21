// P3.22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	srand(time(NULL));
	int marbles = rand() % 50 + 1;
	int take;
	int ctake;
	bool player = false;
	bool smart = false;

	int playerStart = rand() % 2;
	int smartDumb = rand() % 2;

	if (playerStart == 1) {
		player = true;
	}

	if (smartDumb == 1) {
		smart = true;
	}


	while (marbles > 0) {

		if (player == false) {
			cout << "It is the computer's turn." << endl;
			cout << "There are " << marbles << " marbles in the pile" << endl;
			_sleep(2000);

			if (smart == true) {
				//there's probably a better way to do this
				if (marbles > 63) {
					ctake = marbles - 63;
				}

				else if (marbles > 31) {
					ctake = marbles - 31;
				}

				else if (marbles > 15) {
					ctake = marbles - 15;
				}

				else if (marbles > 7) {
					ctake = marbles - 7;
				}

				else if (marbles > 3) {
					ctake = marbles - 3;
				}

				else {
					ctake = 1;
				}
			}

			if (smart == false) {
				if (marbles == 1) {
					ctake = 1;
				}
				
				else {
					ctake = rand() % (marbles / 2) + 1;
				}
			}

			cout << "The computer takes " << ctake << " marbles" << endl;
			player = true;
			marbles -= ctake;
		}

		if (marbles == 0) {
			break;
		}


		if (player == true) {
			cout << "There are " << marbles << " marbles in the pile" << endl;
			cout << "how many marbles do you want to take? " << endl;
			cin >> take;
			if (take > marbles / 2) {
				cout << "(cheater)" << endl;
			}
			player = false;
			marbles -= take;
		}

	}

	string difficulty;

	if (smart == true) {
		difficulty = "hard";
	}

	else {
		difficulty = "easy";
	}

	if (player == true) {
		cout << "NICE, you beat a computer on " << difficulty << endl;
	}

	else {
		cout << "You just got rekt by a computer on " << difficulty << endl;
	}

	cout << endl;
	system("pause");
	return 0;
	
}

