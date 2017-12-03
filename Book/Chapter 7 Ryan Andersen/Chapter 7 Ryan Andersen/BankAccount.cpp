
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "BankAccount.h"

BankAccount::BankAccount()
{
}


BankAccount::~BankAccount()
{
}


void BankAccount::deposit(double amount) {
	this->balance += amount;
}


double BankAccount::getBalance() const {
	return this->balance;
}
