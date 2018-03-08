#include "Header.h"

void addRegistrant(bool admin) {
	string input;
	int pos;
	do {
		cout << endl << endl << (admin ? "1: Student" : "1: I am a student") << endl << (admin ? "2: Faculty" : "2: I am faculty") << endl << "b: back to mode selection" << endl << "Enter selection: ";
		cin >> input;
		string fname;
		string lname;
		string gender;
		string pronoun = admin ? "their" : "your";

		if (admin) {
			cout << endl << "Enter the position you want to enter the person in: ";
			cin >> pos;
		}

		if (input == "1" || input == "2") {
			cout << endl << endl << "Enter " << pronoun << " first and last name, e.g. \"John Doe\": ";
			cin >> fname >> lname;
			cin.ignore();
			cout << endl << "Enter " << pronoun << " gender, e.g. \"Attack Helicopter\": ";
			getline(cin, gender);
		}

		if (input == "1") {
			string sClass;
			int age;
			cout << endl << "Enter " << pronoun << " class: ";
			getline(cin, sClass);
			cout << endl << "Enter " << pronoun << " age: ";
			cin >> age;
			Person* student = new Student(fname, lname, gender, sClass, age);
			if (admin) {
				raffle.manualAddRegistrant(student, pos);
			}
			else {
				cout << endl << "Thank you! " << (admin ? "They" : "You") << " are #" << raffle.addRegistrant(student) << " on the list.";
			}

		}

		else if (input == "2") {
			int years;
			string subject;
			cout << endl << "Enter " << pronoun << " years of service: ";
			cin >> years;
			cin.ignore();
			cout << endl << "Enter " << pronoun << " subject area: ";
			getline(cin, subject);
			Person* faculty = new Faculty(fname, lname, gender, years, subject);
			if (!admin) {
				cout << endl << "Thank you! " << (admin ? "They" : "You") << " are #" << raffle.addRegistrant(faculty) << " on the list.";
			}
			else {
				raffle.manualAddRegistrant(faculty, pos);
			}
		}

	} while (input != "b");
}

int main() {
	string input;
	do {
		cout << endl << "1: Registration Mode" << endl << "2: Administration Mode" << endl << "q: quit program" << endl << "Enter selection: ";
		cin >> input;

		if (input == "1") {
			addRegistrant(false);
		}

		else if (input == "2") {
			cout << endl << "1: View list of registrants chronologically" << endl
				<< "2: View list of registrants sorted by last name first name" << endl
				<< "3: Search for a registrant" << endl
				<< "4: Manually add registrants" << endl
				<< "5: Enter prizes" << endl
				<< "6: Raffle Prizes and list winners" << endl
				<< "Enter an option: ";
			cin >> input;
			
			if (input == "1") {
				raffle.printChronoRegistrants();
			}

			if (input == "2") {
				raffle.printSortedRegistrants();
			}

			if (input == "3") {
				cout << endl << "Enter a name to search for, in this format \"LastName Firstname\": ";
				string lName;
				string fName;
				cin >> lName >> fName;

				Person* foundPerson = raffle.findRegistrant(fName, lName);

				if (foundPerson != NULL) {
					cout << endl;
					foundPerson->printInfo();
					cout << endl;
				}
				else {
					 cout << "Person of name " << fName << " " << lName << " was not found.";
				}

			}

			if (input == "4") {
				addRegistrant(true);
			}

			if (input == "5") {
				while (input != "n") {
					cout << endl << "Enter the prize name and company name, e.g. Chocolates Hershey's: ";
					string name;
					string cName;
					cin >> name >> cName;
					cout << endl << "Is the prize for Students (s) Faculty (f) or either (e)?: ";
					string a;
					cin >> a;
					Role assoc = a == "s" ? Role::Student : a == "f" ? Role::Faculty : Role::Any;
					Prize p(name, cName, assoc);
					raffle.addPrize(p);
					cout << endl << "Add another prize? y/n: ";
					cin >> input;
				}
			}

			if (input == "6") {
				raffle.distributeRaffle();
				cout << endl;
				raffle.printWinners();
			}
		}

	} while (input != "q");


	cout << endl << endl;
	system("pause");
	return 0;
}