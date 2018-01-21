//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "HourlyEmployee.h"


HourlyEmployee::HourlyEmployee(int employeeNumber, string name, string streetAddress, string phoneNumber, double hoursWorked, double hourlyWage) : Employee::Employee(employeeNumber, name, streetAddress, phoneNumber) {

	this->hourlyWage = hourlyWage;
	this->hoursWorked = hoursWorked;
}

double HourlyEmployee::getHoursWorked() const {
	return this->hoursWorked;
}

void HourlyEmployee::setHoursWorked(double hoursWorked) {
	this->hoursWorked = hoursWorked;
}

double HourlyEmployee::getHourlyWage() const {
	return this->hourlyWage;
}

void HourlyEmployee::setHourlyWage(double hourlyWage) {
	this->hourlyWage = hourlyWage;
}


double HourlyEmployee::calcPay() const {
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

void HourlyEmployee::readData(ifstream & is)
{
	Employee::readData(is);

	string dat[2];
	getline(is, dat[0]);
	getline(is, dat[1]);

	this->setHoursWorked(stod(dat[0]));
	this->setHourlyWage(stod(dat[1]));

}


void HourlyEmployee::write(ofstream& o) {
	
	Employee::write(o);
	o << this->getHoursWorked() << endl << this->getHourlyWage() << endl;
}

HourlyEmployee* HourlyEmployee::read(ifstream& is) {
	HourlyEmployee* e = new HourlyEmployee();
	e->readData(is);
	return e;
}

void HourlyEmployee::printCheck() {
	Employee::printCheck();
	cout << "Hours Worked: " << this->hoursWorked << endl << "Hourly Wage: " << this->hourlyWage
		<< endl << endl;
}