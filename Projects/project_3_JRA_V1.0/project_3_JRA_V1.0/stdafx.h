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

void mySort(int nums[], int numelems);
int sortHelp(int nums[], int index, int size);