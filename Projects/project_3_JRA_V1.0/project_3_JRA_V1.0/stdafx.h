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

using namespace std;

//sorts an array in ascending order
//accepts arr, the array to be sorted, and n, the size of the array
void Sort(int arr[], int n);

//does comparison and switching part of sort
void sortHelp(int arr[], int index, int size);