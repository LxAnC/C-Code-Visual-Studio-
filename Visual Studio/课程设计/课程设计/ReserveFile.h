#pragma once
#include<iostream>
using namespace std;
#include <map>
#include "globalFile.h"

class ReserveFile
{
public:
	ReserveFile();
	void updateOrder();
	map<int, map<string, string>> m_orderData;
	int m_Size;
};