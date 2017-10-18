// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//sorts an array in ascending order
//accepts arr, the array to be sorted, and n, the size of the array
void Sort(int arr[], int n);

//a helper function for Sort, does comparison and the actual switching part of sort
//accepts arr, an array, index, the current index of the array, and size, the size of the array.
void sortHelp(int arr[], int index, int size);

//initiates a number guessing game
//accepts "size", the max size of the range of numbers the game will guess from
void hilo(int size);

//does the actual searching of hilo. Will prompt the user asking if a value is high or low.
//accepts "first", the lowest value to search from, and "last", the largest value to search from.
void hiloHelp(int first, int last, vector<int>& guesses);