#pragma once
#include<iostream>
using namespace std;
int max(int a, int b);
int min(int a, int b);
int max(int a, int b)
{
	return a > b ? a : b;
}
int min(int a, int b)
{
	return a < b ? a : b;
}