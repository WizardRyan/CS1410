//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once
#include <string>
#include <math.h>
#include <fstream>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

//this class represents an employee and that employee's data
class Employee {

private:
	int employeeNumber;
	string name;
	string streetAddress;
	string phoneNumber;


protected:
	Employee() = default;
	//the readData function, reads in data from a file
	//accepts is, the filestream to read the data with
	//no return
	void virtual readData(ifstream& is);
	Employee(int employeeNumber, string name, string streetAddress, string phoneNumber);

public:


	//all the below functions require that their respective data member be initialized for them to work properly

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

	//set the employee's number
	void setEmployeeNumber(int num);

	//calculates the pay of an employee
	//accepts no parameters
	//returns the employee's total pay as a double
	//requires employee's wage and hours worked be initialized
	virtual double calcPay() const = 0;

	//returns the employee's employee number
	int getEmployeeNumber() const;

	//the write function, will write a premade set of data to a file
	//accepts o, an ofstream that assumes it already has created a file
	//no return
	virtual void write(ofstream& o);
	

	//prints out the paycheck of an employee
	//accepts no parameters
	//no return
	void virtual printCheck();

	//prints out a character iteravely
	//accepts c, the character to be printed, and num, the amount of times to print
	//no return
	void drawChar(char c, int num);
};

