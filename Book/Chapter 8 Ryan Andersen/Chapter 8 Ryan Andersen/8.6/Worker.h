//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.


#pragma once
#include <string>
#include <iostream>
using namespace std;

class Worker
{
public:
	Worker(string name, double salary);
	~Worker();

	//computes the pay for the Worker
	//will always return -1, as you need a derived class to calculate the pay
	double virtual compute_pay(int hours);

protected:
	string name;
	double salary;

};

