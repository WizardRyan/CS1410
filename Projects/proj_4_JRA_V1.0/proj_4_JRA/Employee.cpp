//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "Employee.h"

double Employee::getHoursWorked() const {
	return this->hoursWorked;
}

void Employee::setHoursWorked(double hoursWorked) {
	this->hoursWorked = hoursWorked;
}

double Employee::getHourlyWage() const {
	return this->hourlyWage;
}

void Employee::setHourlyWage(double hourlyWage) {
	this->hourlyWage = hourlyWage;
}

string Employee::getPhoneNumber() const{
	return this->phoneNumber;
}

void Employee::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Employee::getStreetAddress()const {
	return this->streetAddress;
}

void Employee::setStreetAddress(string streetAddress) {
	this->streetAddress = streetAddress;
}

string Employee::getName()const {
	return this->name;
}

void Employee::setName(string name) {
	this->name = name;
}

double Employee::calcPay() const {
	double overTime = 0;
	double overTimePay = 0;
	double regularPay = 0;
	const double FEDERAL_TAX = .2;
	const double STATE_TAX = .075;
	double grossPay = 0;
	double netPay = 0;
	double totalHours = hoursWorked;
	
	if (totalHours > 40) {
		overTime = hoursWorked - 40;
		overTimePay = overTime * (hourlyWage * 1.5);
		totalHours -= overTime;
	}

	regularPay = hourlyWage * totalHours;

	grossPay = regularPay + overTimePay;

	netPay = grossPay * (1 - FEDERAL_TAX);
	netPay -= grossPay * STATE_TAX;

	//round to the second decimal's place (100.345 = 100.35, 100.342 = 100.34)
	netPay *= 100;
	netPay = (abs(static_cast<int>(netPay) - netPay) >= .5) ? ceil(netPay) : floor(netPay);
	netPay /= 100;

	return netPay;
}

int Employee::getEmployeeNumber()const {
	return this->employeeNumber;
}

Employee::Employee(int employeeNumber, string name, string streetAddress, string phoneNumber, double hourlyWage, double hoursWorked) {
	this->employeeNumber = employeeNumber;
	this->name = name;
	this->streetAddress = streetAddress;
	this->phoneNumber = phoneNumber;
	this->hourlyWage = hourlyWage;
	this->hoursWorked = hoursWorked;
}
