//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include "HourlyWorker.h"
HourlyWorker::HourlyWorker(string name, double salary) : Worker::Worker(name, salary)
{
}


HourlyWorker::~HourlyWorker()
{
}

double HourlyWorker::compute_pay(int hours) {
	int overtime = 0;
	int time = hours;
	if (time > 40) {
		overtime = time - 40;
		time -= overtime;
	}

	return (this->salary * time) + (this->salary * 1.5 * overtime);
}