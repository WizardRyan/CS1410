
//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once

//this class represents a basic bank account
class BankAccount
{
	double balance = 0;

public:
	BankAccount();

	//deposits money into the current account's balance
	//accepts amount, the amount to be deposited
	void deposit(double amount);

	//get the balance of the current account
	//returns a double, the current balance
	double getBalance() const;
	
	~BankAccount();
};

