#pragma once
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Employee.h"
class SalariedEmployee :
	public Employee
{

private:
	double salary;

protected:
	//the readData function, reads in data from a file
	//accepts is, the filestream to read the data with
	//no return
	virtual void readData(ifstream& is) override;

public:
	SalariedEmployee() = default;
	SalariedEmployee(int employeeNumber, string name, string streetAddress, string phoneNumber, double salary);

	//the write function, will write a premade set of data to a file
	//accepts o, an ofstream that assumes the stream has already has created a file
	//no return
	void virtual write(ofstream& o) override;

	//gets the salary of a salaried employee
	//accepts no parameters
	//return salary of employee
	double getSalary();

	//sets the salary of a salaried employee
	//accepts salary, the salary to set on the employee
	//no return
	void setSalary(double salary);

	virtual double calcPay() const override;
	
	//prints out the paycheck of an employee
	//accepts no parameters
	//no return
	virtual void printCheck() override;

	//the read function
	//accepts is, an input stream that assumes it already has reference to an existing file
	//returns an employee pointer from the read data
	static SalariedEmployee* read(ifstream& is);
};

