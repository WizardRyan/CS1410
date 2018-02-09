#include "Header.h"

bool binary_search(vector<int> v, int from, int to, int value, int& m)
{
	if (from > to) {

		return false;
	}

	int mid = (from + to) / 2;

	if (v[mid] == value) {
		m = mid;
		return true;
	}

	else if (v[mid] < value)
		return binary_search(v, mid + 1, to, value, m);
	else
		return binary_search(v, from, mid - 1, value, m);
}

int main() {


	cout << endl << endl;
	system("pause");
	return 0;
}