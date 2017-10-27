// Author: Ryan Andersen
// Assignment: lab 01
// Instructor: Blair
// Class: CS 1410
// Date Written: 10/26/17
// Description: implements a class "Account"

//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "mainHeader.h"
#include "Account.h"

int main() {
	Account myAccount;

	myAccount.deposit(100);
	cout << myAccount.getCurrentBalance() << endl;

	myAccount.withdraw(50);
	cout << myAccount.getCurrentBalance() << endl;

	myAccount.withdraw(99999999999);
	cout << myAccount.getCurrentBalance() << endl << endl << endl;

	system("pause");
	return 0;
}