
#include"util.h"
#include "Appointment.h"

bool operator<(const Appointment& a, const Appointment& b)
{
	return (a.date <= b.date && a.time < b.time);
}

bool operator>(const Appointment& a, const Appointment& b)
{
	return (a.date >= b.date && a.time > b.time);
}

bool operator==(const Appointment& a, const Appointment& b)
{
	return (a.date == b.date && a.time == b.time);
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
			m = mid + 1;
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

bool addAppointment(vector<Appointment> apps, Appointment app) {
	int index = 0;
	binary_search_appointments(apps, 0, apps.size() - 1, app, index);

	if (index == apps.size()) {
		apps.push_back(app);
	}

}