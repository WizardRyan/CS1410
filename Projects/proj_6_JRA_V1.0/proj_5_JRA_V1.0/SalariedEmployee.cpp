//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "SalariedEmployee.h"


SalariedEmployee::SalariedEmployee(int employeeNumber, string name, string streetAddress, string phoneNumber, double salary) : Employee::Employee(employeeNumber, name, streetAddress, phoneNumber), salary{ salary }
{
}


void SalariedEmployee::readData(ifstream & is)
{
	Employee::readData(is);

	string dat[2];
	getline(is, dat[0]);

	this->salary = stod(dat[0]);
}

void SalariedEmployee::write(ofstream & o)
{
	Employee::write(o);
	o << this->salary << endl;
}

double SalariedEmployee::getSalary()
{
	return this->salary;
}

void SalariedEmployee::setSalary(double salary)
{
	this->salary = salary;
}

double SalariedEmployee::calcPay() const
{

	const double FEDERAL_TAX = .2;
	const double STATE_TAX = .075;
	const double BENEFITS = .0524;
	double grossPay = this->salary;
	double netPay = 0;


	netPay = grossPay * (1 - FEDERAL_TAX);
	netPay -= grossPay * STATE_TAX;
	netPay -= grossPay * BENEFITS;

	//round to the second decimal's place (100.345 = 100.35, 100.342 = 100.34)
	netPay *= 100;
	netPay = (abs(static_cast<int>(netPay) - netPay) >= .5) ? ceil(netPay) : floor(netPay);
	netPay /= 100;

	return netPay;
}

void SalariedEmployee::printCheck()
{
	Employee::printCheck();
	cout << "Salary: " << this->salary << endl << endl;
}

SalariedEmployee * SalariedEmployee::read(ifstream & is)
{
	SalariedEmployee* emp = new SalariedEmployee();
	emp->readData(is);
	return emp;
}
