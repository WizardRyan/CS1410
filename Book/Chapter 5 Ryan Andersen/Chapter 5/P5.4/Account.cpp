//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Account.h"

Account::Account() {
	balance = 0;
}

void Account::deposit(double amount) {
	balance += amount;
}

void Account::withdraw(double amount) {
	(amount > balance) ? balance -= 5 : balance -= amount;
}

double Account::getCurrentBalance() const {
	return balance;
}