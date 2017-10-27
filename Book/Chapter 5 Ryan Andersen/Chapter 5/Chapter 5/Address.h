//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#pragma once

#include <iostream>
#include <string>
#include <iostream>

using namespace std;

//contains data about an address, as you can see in the private field list.
class Address {
private:
	int houseNum;
	string street;
	int apartNum;
	string city;
	string state;
	int pcode;

public:

	Address(int houseNump,
		string streetp,
		int apartNump,
		string cityp,
		string statep,
		int pcodep);

	//same as above constructor, but without apartNum
	Address(int houseNump,
		string streetp,
		string cityp,
		string statep,
		int pcodep);

	//prints the address...
	void printAddress();

	//evaluates which address should come before, based of zipcode. 
	//
	//lower digit comes first
	//^^^^^^^^^^^^^^^^^^^^^^^
	//needs to take in another address to be compared
	//return a bool, false if otherAdress comes first
	bool comes_before(const Address& otherAddress);

	int get_pcode() const;

};