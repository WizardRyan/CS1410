//I declare that the following source code was written solely by me.
//I understand that copying any source code, in whole or in part, 
// constitutes cheating, and that I will receive a zero on this project
// if I am found in violation of this policy.

#include "Address.h"

Address::Address(int houseNump,
	string streetp,
	int apartNump,
	string cityp,
	string statep,
	int pcodep) {

	houseNum = houseNump;
	street = streetp;
	apartNum = apartNump;
	city = cityp;
	state = statep;
	pcode = pcodep;
}

Address::Address(int houseNump,
	string streetp,
	string cityp,
	string statep,
	int pcodep) {

	houseNum = houseNump;
	street = streetp;
	apartNum = 0;
	city = cityp;
	state = statep;
	pcode = pcodep;
}

void Address::printAddress() {
	cout << houseNum << " " << street << endl
	 << city << " " << state << " " << pcode << endl;
}

int Address::get_pcode() const {
	return pcode;
}

bool Address::comes_before(const Address& otherAddress) {
	bool before;
	(pcode < otherAddress.get_pcode()) ? before = true : before = false;
	return before;
}

