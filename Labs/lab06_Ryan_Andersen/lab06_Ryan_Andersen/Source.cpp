#include "Header.h"

int main() {
	const int SIZE = 100;
	string strVoltages[SIZE];
	double voltages[SIZE];

	ifstream istream("voltages.txt");


	for (int i = 0; i < SIZE; i++) {
		if (!istream.fail() && !istream.eof()) {
			std::getline(istream, strVoltages[i]);
			try {
				voltages[i] = stod(strVoltages[i]);
				cout << voltages[i] << endl;
			}
			catch (...) {
				cout << endl << "end of file reached";
			}
		}
	}


	cout << endl << endl;
	system("pause");
	return 0;
}