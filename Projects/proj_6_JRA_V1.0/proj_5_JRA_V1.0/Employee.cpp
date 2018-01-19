//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "Employee.h"

string Employee::getPhoneNumber() const {
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
	//double overTime = 0;
	//double overTimePay = 0;
	//double regularPay = 0;
	//const double FEDERAL_TAX = .2;
	//const double STATE_TAX = .075;
	//double grossPay = 0;
	//double netPay = 0;
	//double totalHours = hoursWorked;

	//if (totalHours > 40) {
	//	overTime = hoursWorked - 40;
	//	overTimePay = overTime * (hourlyWage * 1.5);
	//	totalHours -= overTime;
	//}

	//regularPay = hourlyWage * totalHours;

	//grossPay = regularPay + overTimePay;

	//netPay = grossPay * (1 - FEDERAL_TAX);
	//netPay -= grossPay * STATE_TAX;

	////round to the second decimal's place (100.345 = 100.35, 100.342 = 100.34)
	//netPay *= 100;
	//netPay = (abs(static_cast<int>(netPay) - netPay) >= .5) ? ceil(netPay) : floor(netPay);
	//netPay /= 100;

	//return netPay;
}

int Employee::getEmployeeNumber()const {
	return this->employeeNumber;
}

Employee::Employee(int employeeNumber, string name, string streetAddress, string phoneNumber) {
	this->employeeNumber = employeeNumber;
	this->name = name;
	this->streetAddress = streetAddress;
	this->phoneNumber = phoneNumber;

}

//void Employee::write(ofstream& o){
//	vector<Employee*> employees;
//
//	Employee joe(37, "Joe Brown", "123 Main St.", "123-6788", 45, 10.00);
//	Employee sam(21, "Sam Jones", "45 East State", "661-9000", 30, 12.00);
//	Employee mary(15, "Mary Smith", "12 High Street", "401-8900", 40, 15.00);
//	employees.push_back(&joe);
//	employees.push_back(&sam);
//	employees.push_back(&mary);
//
//	for (auto e : employees) {
//		o << e->getEmployeeNumber() << endl << e->getName() << endl << e->getStreetAddress() << endl << e->getPhoneNumber() << endl << e->getHoursWorked() << endl << e->getHourlyWage() << endl;
//	}
//}

//vector<Employee*> Employee::read(ifstream& is) {
//	vector<Employee*> employees;
//	string data[6];
//	int index = 0;
//
//	for (string dat; getline(is, dat);) {
//		data[index] = dat;
//		index++;
//
//		if (index == 6) {
//			employees.push_back(new Employee(stoi(data[0]), data[1], data[2], data[3], stod(data[4]), stod(data[5])));
//			index = 0;
//		}
//	}
//	return employees;
//}