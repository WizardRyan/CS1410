// P3.21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int input = 0;
	int prime = 2;
	bool isPrime = false;

	cout << "enter number to calculate primes up to: ";
	cin >> input;

	vector<int> primes;

	while (prime < input) {

		for (int j = 2; j < input; j++) {

			if (j != prime) {
				if (prime % j == 0) {
					isPrime = false;
					break;
				}
			}

			else {
				isPrime = true;
			}
		}

		if (isPrime == true) {
			primes.push_back(prime);
		}
		prime++;
	}

	for (int i = 0; i < primes.size(); i++) {
		cout << primes[i] << endl;
	}

	//whew

	system("pause");
    return 0;
}

