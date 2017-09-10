// 2.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{	
	string num;
	string result;

	std::cout << "enter an integer between 1,000 and 999,999" << endl;
	cin >> num;


	for (size_t i = 0; i < num.length(); i++) {
		if (num.at(i) != ',') {
			result += num.at(i);
		}
	}

	std::cout << result << endl;

	std::system("pause");
    return 0;
}

