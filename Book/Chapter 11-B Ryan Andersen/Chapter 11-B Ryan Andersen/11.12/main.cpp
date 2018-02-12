#include "Header.h"

void printAppointments(vector<Appointment>app) {
	for (auto a : app) {
		cout << endl <<  "Date: " << a.date << endl << "Time: " << a.time << endl << "Description: " << a.description << endl << endl;
	}
}

int main() {
	vector<Appointment> appointments = { Appointment(mar / 22 / 2018, 100, "Just a simple appointment my dude"), Appointment(feb / 23 / 2018, 1200, "Gonna check up on some deets for something") };

	int input;

	do {
		cout << "Select an option: " << endl
			<< "1: print current appointments" << endl
			<< "2: add an appointment" << endl 
			<< "3: quit the program" << endl << endl
			<< "Enter your selection: ";

		cin >> input;

		if (input == 1) {
			printAppointments(appointments);
		}

		else if (input == 2) {
			int y, m, d;
			int time = 0;
			string description;

			cout << "Enter in a date in this format M D Y, for example 3 29 2000, if you wanted to specify March 29th 2000: ";
			cin >> m >> d >> y;
			auto date = month{ m } / d / y;
			cout << endl << "Enter in a time in military format, with no leading zeroes, e.g. 100 for 1:00 AM, or 1300 for 1:00 PM: ";
			cin >> time;
			cout << endl << "Enter in a short description for your appointment: ";
			cin >> description;
			
			auto appointment = Appointment(date, time, description);
			appointments.push_back(appointment);
			sort(appointments.begin(), appointments.end());
		}

	} while (input != 3);
	

	printAppointments(appointments);


	cout << endl << endl;
	system("pause");
	return 0;
}