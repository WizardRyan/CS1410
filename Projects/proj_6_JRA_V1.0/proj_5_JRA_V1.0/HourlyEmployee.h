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
	int employeeNumber;
	string name;
	string streetAddress;
	string phoneNumber;
	double hourlyWage;
	double hoursWorked;

public:

	HourlyEmployee(int employeeNumber, string name, string streetAddress, string phoneNumber, double hourlyWage, double hoursWorked);


	//all the below functions require that their respective data member be initialized for them to work properly

	//returns the employee's hours worked
	double getHoursWorked() const;

	//sets the employee's hours worked
	void setHoursWorked(double hoursWorked);

	//returns employee's hourly wage
	double getHourlyWage() const;

	//sets the employee's hourly wage
	void setHourlyWage(double hourlyWage);

	//returns the employee's phone number
	string getPhoneNumber() const;

	//sets the employee's phone number
	void setPhoneNumber(string phoneNumber);

	//Do you really want me to do this ;_;? 
	//returns the employee's street adress
	string getStreetAddress() const;

	//sets the employee's street address
	void setStreetAddress(string streetAddress);

	//returns the employee's name
	string getName() const;

	//sets the employee's name
	void setName(string name);

	//calculates the pay of an employee
	//accepts no parameters
	//returns the employee's total pay as a double
	//requires employee's wage and hours worked be initialized
	double calcPay() const;

	//returns the employee's employee number
	int getEmployeeNumber() const;

	//the write function, will write a premade set of data to a file
	//accepts o, an ofstream that assumes it already has created a file
	//no return
	static void write(ofstream& o);

	//the read function
	//accepts is, an input stream that assumes it already has reference to an existing file
	//returns a vector of employee pointers from the read data
	static vector<HourlyEmployee*> read(ifstream& is);

};

