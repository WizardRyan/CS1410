#include "Employee.h"

double Employee::getHoursWorked() {
	return this->hoursWorked;
}

void Employee::setHoursWorked(double hoursWorked) {
	this->hoursWorked = hoursWorked;
}

double Employee::getHourlyWage() {
	return this->hourlyWage;
}

void Employee::setHourlyWage(double hourlyWage) {
	this->hourlyWage = hourlyWage;
}

string Employee::getPhoneNumber() {
	return this->phoneNumber;
}

void Employee::setPhoneNumber(string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

string Employee::getStreetAddress() {
	return this->streetAddress;
}

void Employee::setStreetAddress(string streetAddress) {
	this->streetAddress = streetAddress;
}

string Employee::getName() {
	return this->name;
}

void Employee::setName(string name) {
	this->name = name;
}

double Employee::calcPay() {
	double overTime = 0;
	double overTimePay = 0;
	double regularPay = 0;
	const double FEDERAL_TAX = .2;
	const double STATE_TAX = .075;
	double grossPay = 0;
	double netPay = 0;
	
	if (hoursWorked > 40) {
		overTime = hoursWorked - 40;
		overTimePay = overTime * (hourlyWage * 1.5);
		hoursWorked -= overTime;
	}

	regularPay = hourlyWage * hoursWorked;

	grossPay = regularPay + overTimePay;

	netPay = grossPay * (1 - FEDERAL_TAX);
	netPay -= grossPay * STATE_TAX;

	//round to the second decimal
	netPay *= 100;
	netPay = (abs(static_cast<int>(netPay) - netPay) >= .5) ? ceil(netPay) : floor(netPay);
	netPay /= 100;

	return netPay;
}

int Employee::getEmployeeNumber() {
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
