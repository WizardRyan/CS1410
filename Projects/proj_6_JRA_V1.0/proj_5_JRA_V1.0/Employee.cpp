//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#include "Employee.h"

Employee::Employee(int employeeNumber, string name, string streetAddress, string phoneNumber) {
	this->employeeNumber = employeeNumber;
	this->name = name;
	this->streetAddress = streetAddress;
	this->phoneNumber = phoneNumber;

}


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
	return -1;
}

void Employee::setEmployeeNumber(int num) {
	this->employeeNumber = num;
}

int Employee::getEmployeeNumber()const {
	return this->employeeNumber;
}

void Employee::write(ofstream& o){
	o << this->getEmployeeNumber() << endl << this->getName() << endl << this->getStreetAddress() << endl << this->getPhoneNumber() << endl;
	
}

void Employee::readData(ifstream& is) {
		int index = 0;
		string data[4];

		for (int i = 0; i < 4; i++) {
			getline(is, data[i]);
		}
		this->setEmployeeNumber(stoi(data[0]));
		this->setName(data[1]);
		this->setStreetAddress(data[2]);
		this->setPhoneNumber(data[3]);

}


void Employee::printCheck() {
	cout << fixed << setprecision(2);
	cout << endl << endl;
	drawChar('-', 20);
	cout << "FluffleShuffle Electronics";
	drawChar('-', 20);
	cout << endl << endl
		<< "Pay to the order of " << this->getName();
	drawChar('.', 10);
	cout << "$" << this->calcPay()
		<< endl << endl
		<< "United Bank of This Programming Project" << endl;
	drawChar('-', 68);
	cout << endl;
}

void Employee::drawChar(char c, int num) {
	for (int i = 0; i < num; i++) {
		cout << c;
	}
}