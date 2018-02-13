//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include"util.h"
#include "Appointment.h"
#include "Search.h"

bool operator<(const Appointment& a, const Appointment& b)
{
	return ((a.date < b.date) || (a.date == b.date && a.startingTime < b.startingTime));
}

bool operator>(const Appointment& a, const Appointment& b)
{
	return ((a.date > b.date) || (a.date == b.date && a.startingTime > b.startingTime));
}

bool operator==(const Appointment& a, const Appointment& b)
{
	return (a.date == b.date && a.startingTime == b.startingTime && a.endingTime == b.endingTime);
}

bool binary_search_appointments(vector<Appointment> v, int from, int to, Appointment value, int& m)
{
	if (from > to) {
		Appointment max = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}

		if (value > max) {
			m = v.size();
		}

		else {
			int mid = (from + to) / 2;

			Appointment min = v[0];
			for (int i = 0; i < v.size(); i++) {
				if (v[i] < min) {
					min = v[i];
				}
			}

			if (value < min) {
				m = mid;
			}

			else {
				m = mid + 1;
			}
		}

		return false;
	}

	int mid = (from + to) / 2;

	if (v[mid] == value) {
		m = mid;
		return true;
	}

	else if (v[mid] < value)
		return binary_search_appointments(v, mid + 1, to, value, m);
	else
		return binary_search_appointments(v, from, mid - 1, value, m);
}

bool appointmentConflicts(Appointment a, Appointment b) {
	if (a.date == b.date) {
		if (
			(a.startingTime > b.startingTime && a.startingTime < b.endingTime)
			||
			(a.endingTime > b.startingTime && a.endingTime < b.endingTime)
			) {
			return true;
		}
	}
	return false;
}

bool addAppointment(vector<Appointment>& apps, Appointment app) {
	int index = 0;
	binary_search_appointments(apps, 0, apps.size() - 1, app, index);

	if (index == apps.size()) {
		if (index > 0 && !appointmentConflicts(apps[index - 1], app)) {
			apps.push_back(app);
			return true;
		}
		return false;
	}

	else {
		//if it doesn't conflict with the appointment before and after it
		if (!(appointmentConflicts(app, apps[index]) || (index > 0 && appointmentConflicts(app, apps[index - 1])))) {
			vector<Appointment> temp;

			//push appointments to temp array, and delete those pushed appointments from original
			for (int i = apps.size() - 1; i >= index; i--) {
				temp.push_back(apps[i]);
				apps.pop_back();
			}

			//add new appointment
			apps.push_back(app);

			//add appointments back to vector
			for (int i = temp.size() - 1; i >= 0; i--) {
				apps.push_back(temp[i]);
			}
			return true;
		}

		else {
			return false;
		}
	}
}

