#pragma once

#ifndef TestDemo_h__
#define TestDemo_h__

#include <iostream>
#include <stdlib.h>

#include <fstream>
#include <sstream>

#include "Sales_item.h"

#include <string>
#include <vector>
#include <bitset>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
#include <utility>

#pragma region Global functions
void nagCount();
void getSumFromInput();
void printNumSeq();
int sales_item_test();
int getPow();
void getString();
void delPunct();
void getIntSum();
void wordToUpper();
void iteratorDemo();
void bitsetDemo();
void arrayTest();
void pointerTest();
void dymArr();
void SaleItemDemo();


inline const std::string &getLarte(const std::string& s1, const std::string& s2) {
	return s1.size() < s2.size() ? s1 : s2;
}

#pragma endregion

#pragma region Variables
const int bufSize = 512;


#pragma endregion

#endif // TestDemo_h__
