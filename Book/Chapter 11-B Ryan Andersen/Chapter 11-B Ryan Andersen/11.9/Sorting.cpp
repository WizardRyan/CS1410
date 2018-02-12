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
	int curr_size;  // For current size of subarrays to be merged
					// curr_size varies from 1 to n/2
	int left_start; // For picking starting index of left subarray
					// to be merged

					// Merge subarrays in bottom up manner.  First merge subarrays of
					// size 1 to create sorted subarrays of size 2, then merge subarrays
					// of size 2 to create sorted subarrays of size 4, and so on.
	for (curr_size = 1; curr_size <= a.size() - 1; curr_size = 2 * curr_size)
	{
		// Pick starting point of different subarrays of current size
		for (left_start = 0; left_start<a.size() - 1; left_start += 2 * curr_size)
		{
			// Find ending point of left subarray. mid+1 is starting 
			// point of right
			int mid = left_start + curr_size - 1;

			int right_end = min(left_start + 2 * curr_size - 1, a.size() - 1);

			// Merge Subarrays arr[left_start...mid] & arr[mid+1...right_end]
			merge(a, left_start, mid, right_end);
		}
	}
}
