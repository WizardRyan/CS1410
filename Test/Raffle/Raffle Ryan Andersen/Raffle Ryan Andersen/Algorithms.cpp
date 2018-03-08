#include "Algorithms.h"

bool binary_search_people(vector<Person*> v, int from, int to, string value, int& m)
{
	if (from > to) {
		Person* max = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i]->getFullName() > max->getFullName()) {
				max = v[i];
			}
		}

		if (value > (max->getFullName())) {
			m = v.size();
		}

		else {
			int mid = (from + to) / 2;

			Person* min = v[0];
			for (int i = 0; i < v.size(); i++) {
				if (v[i]->getFullName() < min->getFullName()) {
					min = v[i];
				}
			}

			if (value < min->getFullName()) {
				m = mid;
			}

			else {
				m = mid + 1;
			}
		}

		return false;
	}

	int mid = (from + to) / 2;

	if (v[mid]->getFullName() == value) {
		m = mid;
		return true;
	}

	else if (v[mid]->getFullName() < value)
		return binary_search_people(v, mid + 1, to, value, m);
	else
		return binary_search_people(v, from, mid - 1, value, m);
}


/**
Merges two adjacent ranges in a vector.
@param a the vector with the elements to merge
@param from the start of the first range
@param mid the end of the first range
@param to the end of the second range
*/
void merge(vector<Person*>& a, int from, int mid, int to)
{
	int n = to - from + 1; // Size of the range to be merged
						   // Merge both halves into a temporary vector b
	vector<Person*> b(n);
	int i1 = from;
	// Next element to consider in the first half
	int i2 = mid + 1;
	// Next element to consider in the second half
	int j = 0; // Next open position in b
			   // As long as neither i1 nor i2 is past the end, move the smaller
			   // element into b
	while (i1 <= mid && i2 <= to)
	{
		if (a[i1]->getFullName() < a[i2]->getFullName())
		{
			b[j] = a[i1];
			i1++;
		}
		else
		{
			b[j] = a[i2];
			i2++;
		}
		j++;
	}
	// Note that only one of the two while loops below is executed
	// Copy any remaining entries of the first half
	while (i1 <= mid)
	{
		b[j] = a[i1];
		i1++;
		j++;
	}
	// Copy any remaining entries of the second half
	while (i2 <= to)
	{
		b[j] = a[i2];
		i2++;
		j++;
	}
	// Copy back from the temporary vector
	for (j = 0; j < n; j++)
		a[from + j] = b[j];
}
/**
Sorts the elements in a range of a vector.
@param a the vector with the elements to sort
@param from start of the range to sort
@param to end of the range to sort
*/
void merge_sort_people(vector<Person*>& a, int from, int to)
{
	if (from == to) return;
	int mid = (from + to) / 2;
	// Sort the first and the second half
	merge_sort_people(a, from, mid);
	merge_sort_people(a, mid + 1, to);
	merge(a, from, mid, to);
}

int min(int x, int y) { return (x<y) ? x : y; }