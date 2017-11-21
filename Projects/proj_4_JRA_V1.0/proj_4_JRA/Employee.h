#pragma once
#include <string>
#include <math.h>


using namespace std;

class Employee {

private:
	int employeeNumber;
	string name;
	string streetAddress;
	string phoneNumber;
	double hourlyWage;
	double hoursWorked;

public:
	double getHoursWorked();

	void setHoursWorked(double hoursWorked);

	double getHourlyWage();

	void setHourlyWage(double hourlyWage);

	string getPhoneNumber();

	void setPhoneNumber(string phoneNumber);

	string getStreetAddress();

	void setStreetAddress(string streetAddress);

	string getName();

	void setName(string name);

	double calcPay();

	int getEmployeeNumber();

	Employee(int employeeNumber, string name, string streetAddress, string phoneNumber, double hourlyWage, double hoursWorked);
};

