#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int NUM_TO_FIND = 4;

int isEqual(int num) {
	return num == NUM_TO_FIND;
}

template <class T>
auto customFind(T cont) {
	return find_if(cont.begin(), cont.end(), isEqual);
}


int main() {
	vector<int>nums{ 1, 2, 3, 4, 5, 6, 7 };

	cout << endl << endl;
	return 0;
}