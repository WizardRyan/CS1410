// Author: Ryan Andersen
// Assignment: Chapter 11-B
// Instructor: Blair
// Class: CS 1410
// Date Written: 2/12/18
// Description: a program for practicing searching, sorting and insertions


//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include "Header.h"

//the printAppointments method, prints all appointments
//accepts app, a vector of appointments to print
//no return
void printAppointments(vector<Appointment>app) {
	for (auto a : app) {
		cout << endl <<  "Date: " << a.date << endl << "Starting time: " << a.startingTime << endl << "Ending time: " << a.endingTime << endl << "Description: " << a.description << endl << endl;
	}
}


//the printAppointmentsByData method, prints all appointments within a given date
//accepts app, a vector of appointments to print, and date, the day to print all appointments for
//no return
void printAppointmentsByDate(vector<Appointment>app, year_month_day date) {
	for (auto a : app) {
		if (a.date == date) {
			cout << endl << "Date: " << a.date << endl << "Starting time: " << a.startingTime << endl << "Ending time: " << a.endingTime << endl << "Description: " << a.description << endl << endl;
		}
	}
}

int main() {
	vector<Appointment> appointments = {Appointment(feb / 23 / 2018, 1200, 1340, "Gonna check up on some deets for something"),  Appointment(mar / 22 / 2018, 100, 200, "Just a simple appointment my dude") };

	int input;

	do {
		input = 0;

		cout << "Select an option: " << endl
			<< "1: Print all appointments" << endl
			<< "2: Find an appointment by date" << endl
			<< "3: Add an appointment" << endl 
			<< "4: Quit the program" << endl << endl
			<< "Enter your selection: ";

		cin >> input;

		if (input == 1) {
			printAppointments(appointments);
		}

		else if (input == 2) {
			unsigned int y, m, d = 0;
			cout << endl << "Enter in a date in this format M D Y, for example 3 29 2000, if you wanted to specify March 29th 2000: ";
			cin >> m >> d >> y;
			auto date = month{ m } / d / y;
			printAppointmentsByDate(appointments, date);
		}

		else if (input == 3) {
			unsigned int y, m, d = 0;
			int stime = 0;
			int etime = 0;
			string description;

			cout << "Enter in a date in this format M D Y, for example 3 29 2000, if you wanted to specify March 29th 2000: ";
			cin >> m >> d >> y;
			auto date = month{ m } / d / y;
			cout << endl << "Enter in the appointment's starting time in military format, e.g. 100 for 1:00 AM, or 1300 for 1:00 PM: ";
			cin >> stime;
			cout << endl << "Enter the appointment's closing time: ";
			cin >> etime;
			cout << endl << "Enter in a short description for your appointment: ";
			cin >> description;
			cout << endl;
			
			auto appointment = Appointment(date, stime, etime, description);
			if (addAppointment(appointments, appointment))
				cout << "Appointment added successfully!";
			else
				cout << "!!!Failed to add appointment: appointment conflicts with other appointment!!!";
			cout << endl << endl;
		}

	} while (input != 4);

	cout << endl << endl;
	system("pause");
	return 0;
}