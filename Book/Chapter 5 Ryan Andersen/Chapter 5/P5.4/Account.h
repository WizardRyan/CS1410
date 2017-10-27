//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.
#pragma once
#include <iostream>
#include <string>

using namespace std;

//holds a balance, can withdraw and deposit money
class Account {
private:
	double balance;

public:
	Account();

	//adds the passed in money (amount) to balance
	void deposit(double amount);

	//subtracts the passed in money (amount) from balance
	//if the withdrawal ammount is larger than the money available, deduct a $5 penalty
	void withdraw(double amount);

	//gets the current balance
	double getCurrentBalance() const;

};
