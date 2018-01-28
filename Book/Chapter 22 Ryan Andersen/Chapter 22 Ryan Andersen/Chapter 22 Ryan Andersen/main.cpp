#include "Header.h"

int main() {
	Airplane* a = new Airplane();

	int q = 0;

	while (q != 3) {
			cout << "Welcome to AReal Airline Company!" << endl
				<< "here are your options: " << endl
				<< "1 - Add passenger(s)" << endl
				<< "2 - Show Seating" << endl
				<< "3 - Quit" << endl
				<< "Select an option: " << endl;
			cin >> q;

			if (q == 1) {
				cout << endl << "What class will your passengers be flying in? 1 - First class. 2 - Economy" << endl
					<< "Select an option: ";
				int cl;
				cin >> cl;
				cout << endl << "How many passengers will you be adding? (" << (cl == 1 ? "1-2" : "1-3") << ")" << endl
					<< "Enter num of passengers: ";
				int num;
				cin >> num;
				cout << endl << "What is the passenger(s) preffered seating position? 0 - Window. 1 - Aisle. " << (cl == 2 ? "2 - Center." : "") << endl
					<< "Select an option: ";
				int position;
				cin >> position;
				a->addPassengers((cl == 1 ? 0 : 1), num, position);
				cout << endl;
			}

			if (q == 2) {
				a->showSeating();
			}
			cout << endl << endl;
	}
	
	cout << endl << endl;
	system("pause");
	return 0;
}