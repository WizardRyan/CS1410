#include "Algorithms.h"

//the binary_search function, searches for a value in a vector. 
//If the value isn't found, but is within the range of elements, it sets m to the next largest element.
//Else, m = the size of the vector.
//accepts v, the vector to search, from, where to start the search, to, where to search to, value, the value to be looking for, and m, the param to be set according to the above description
//returns false if value isn't found, true if it is.
bool binary_search_people(vector<Person*> v, int from, int to, string value, int& m)
{
	if (from > to) {
		int max = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > max) {
				max = v[i];
			}
		}

		if (value > max) {
			m = v.size();
		}

		else {

			int mid = (from + to) / 2;

			int min = v[0];
			for (int i = 0; i < v.size(); i++) {
				if (v[i] < min) {
					min = v[i];
				}
			}

			if (value < min) {
				m = v[mid];
			}

			else {
				m = v[mid + 1];
			}
		}

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