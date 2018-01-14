//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#include "SalariedWorker.h"

SalariedWorker::SalariedWorker(string name, double salary) : Worker::Worker(name, salary)
{
}


SalariedWorker::~SalariedWorker()
{
}

double SalariedWorker::compute_pay(int hours) {
	return 40 * this->salary;
}
