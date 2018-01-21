#pragma once
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include <string>
#include <math.h>
#include <fstream>
#include <vector>
#include "Employee.h"

using namespace std;

//this class represents an employee and that employee's data
class HourlyEmployee : public Employee{

private:

	double hourlyWage;
	double hoursWorked;

protected:

	//the readData function, reads in data from a file
	//accepts is, the filestream to read the data with
	//no return
	void virtual readData(ifstream& is) override;
	HourlyEmployee() = default;

public:

	HourlyEmployee(int employeeNumber, string name, string streetAddress, string phoneNumber, double hourlyWage, double hoursWorked);


	//all the below functions require that their respective data member be initialized for them to work properly

	//returns the employee's hours worked
	double getHoursWorked() const;

	//sets the employee's hours worked
	void setHoursWorked(double hoursWorked);

	double getHourlyWage() const;

	//sets the hourly wage of an hourly employee
	void setHourlyWage(double hourlyWage);

	//calculates the pay of an employee
	//accepts no parameters
	//returns the employee's total pay as a double
	//requires employee's wage and hours worked be initialized
	double virtual calcPay() const;

	//the write function, will write a premade set of data to a file
	//accepts o, an ofstream that assumes the stream has already has created a file
	//no return
	virtual void write(ofstream& o) override;

	//the read function
	//accepts is, an input stream that assumes it already has reference to an existing file
	//returns an employee pointer from the read data
	static HourlyEmployee* read(ifstream& is);

	//prints out the paycheck of an employee
	//accepts no parameters
	//no return
	void virtual printCheck() override;

};

