#pragma once
#include "util.h"
/**
Merges two adjacent ranges in a vector.
@param a the vector with the elements to merge
@param from the start of the first range
@param mid the end of the first range
@param to the end of the second range
*/
void merge(vector<int>& a, int from, int mid, int to);

/**
Sorts the elements in a range of a vector.
@param a the vector with the elements to sort
*/
void merge_sort(vector<int>&);