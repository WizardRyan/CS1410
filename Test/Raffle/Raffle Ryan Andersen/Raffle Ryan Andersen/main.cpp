#include "Header.h"

int main() {
	string input;

	do {
		cout << "1: Registration Mode" << endl << "2: Administratrion Mode" << endl << "q: quit program" << endl << "Enter selection: ";
		cin >> input;

		if (input == "1") {
			do {
				cout << endl << endl << "1: I am a student" << endl << "2: I am faculty" << endl << "q: quit to mode selection" <<  endl << "Enter selection: ";
				cin >> input;
				string fname;
				string lname;
				string gender;

				cout << endl << endl << "Enter your first and last name, e.g. \"John Doe\": ";
				cin >> fname >> lname;
				cout << endl << "Enter your gender, e.g. \"Attack Helicopter\": ";
				getline(cin, gender);

				if (input == "1") {
					string sClass;
					int age;
					cout << endl << "Enter your class: ";
					cin >> sClass;
					cout << endl << "Enter your age: ";
					cin >> age;

				}

				else if (input == "2") {
					int years;
					string subject;
					cout << endl << "Enter your years of service: ";
					cin >> years;
					cout << endl << "Enter your subject area: ";
					getline(cin, subject);

				}


			} while (input != "q");
		}

		else if (input == "2") {

		}

	} while (input != "q");


	cout << endl << endl;
	system("pause");
	return 0;
}