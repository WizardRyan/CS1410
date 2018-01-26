#include "Header.h"

int main() {

	Airplane* a = new Airplane();
	a->showSeating();
	a->addPassengers(1, 2, 0);
	//a->addPassengers(1, 3, 0);
	a->showSeating();
	
	cout << endl << endl;
	system("pause");
	return 0;
}