#include "PhoneBook.h"


vector<Person> initFile() {
	rand_seed();

	vector<Person>people(1000);

	ofstream o("phonebook.txt");

	for (int i = 0; i < 1000; i++) {
		string zeros;
		if (i - 10 < 0) {
			zeros = "00";
		}
		else if (i - 100 < 0) {
			zeros = "0";
		}

		else {
			zeros = "";
		}
		o << "name" << zeros + to_string(i) << endl << 801 << rand_int(100, 999) << rand_int(1000, 9999) << endl;
	}

	ifstream in("phonebook.txt");
	for (int i = 0; i < 1000; i++) {
		string name;
		string numString;
		long long number;

		getline(in, name);
		getline(in, numString);
		number = stoll(numString);
		people[i].name = name;
		people[i].number = number;
	}

	return people;
}
