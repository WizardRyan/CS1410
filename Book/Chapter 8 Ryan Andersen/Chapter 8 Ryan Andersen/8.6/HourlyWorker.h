//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#pragma once
#include "Worker.h"
class HourlyWorker :
	public Worker
{
public:
	HourlyWorker(string name, double salary);
	~HourlyWorker();

	//computes the pay for the HourlyWorker
	//accepts hours, the hours worked
	//returns a double of the worker's pay
	double virtual compute_pay(int hours);
};

