#include "util.h"
/**
Merges two adjacent ranges in a vector.
@param a the vector with the elements to merge
@param from the start of the first range
@param mid the end of the first range
@param to the end of the second range
*/
void merge(vector<int>& a, int from, int mid, int to)
{
	int n = to - from + 1; // Size of the range to be merged
						   // Merge both halves into a temporary vector b
	vector<int> b(n);
	int i1 = from;
	// Next element to consider in the first half
	int i2 = mid + 1;
	// Next element to consider in the second half
	int j = 0; // Next open position in b
			   // As long as neither i1 nor i2 is past the end, move the smaller
			   // element into b
	while (i1 <= mid && i2 <= to)
	{
		if (a[i1] < a[i2])
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
void merge_sort(vector<int>& a)
{
	//determine the size of the vector to be merged
	for (int size = 1; size < a.size() - 1; size++) {
		//determine the left index of the vector that needs to be merged
		for (int low = 0; low < a.size() - 1 - size; low += size * 2) {
			//if the size is smaller than the right index when calculated off of low, merge that last vector of a different size
			merge(a, low, low + size - 1, min(low + size * 2 - 1, a.size() - 1));
		}
	}
}



