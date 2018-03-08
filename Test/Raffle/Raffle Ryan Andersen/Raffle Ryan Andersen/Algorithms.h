#pragma once
#include <vector>
#include "Person.h"
#include <list>

using namespace std;

//the binary_search function, searches for a value in a vector. 
//If the value isn't found, but is within the range of elements, it sets m to the next largest element.
//Else, m = the size of the vector.
//accepts v, the vector to search, from, where to start the search, to, where to search to, value, the value to be looking for, and m, the param to be set according to the above description
//returns false if value isn't found, true if it is.
bool binary_search_people(vector<Person*> v, int from, int to, string value, int& m);

/**
Merges two adjacent ranges in a vector.
@param a the vector with the elements to merge
@param from the start of the first range
@param mid the end of the first range
@param to the end of the second range
*/
void merge(vector<Person*>& a, int from, int mid, int to);

/**
Sorts the elements in a range of a vector.
@param a the vector with the elements to sort
*/
void merge_sort_people(vector<Person*>&);

//the min function, returns smaller value
//accepts x and y, the values to be compared
//returns the smaller value
int min(int x, int y);