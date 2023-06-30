//#include<iostream>
//using namespace std;
//int max(int a, int b);
//int min(int a, int b);
//void print(int no, string message);
#include"tools.h"
#include"girls.h"
int main()
{
	/*cout << "max(5,8)=" <<  max(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	int a = 5;
	int b = 10;*/
	//cout << sizeof(int) << endl;
	//cout << sizeof(string) << endl;//string本质就是类
	//cout << sizeof(double) << endl;
	//cout << sizeof(float) << endl;
	//cout << sizeof(bool) << endl;
	
	//不长不短的和正常的是一样的，为什么呢？long型在linux中是8位
	
	//cout << "sizeof(short)=" << sizeof(short) << endl;
	//cout << "sizeof(unsigned short)=" << sizeof(unsigned short) << endl;
	//cout << "sizeof(int)=" << sizeof(int) << endl;
	//cout << "sizeof(unsigned int)=" << sizeof(unsigned int) << endl;
	//cout << "sizeof(long)=" << sizeof(long) << endl;
	//cout << "sizeof(unsigned long)=" << sizeof(unsigned long) << endl;
	/*unsigned short a = -2;
	cout << a << endl;
	cout << 2 <<2;*/
	//超过范围数据会被截断


	//整型的书写
	
	//二进制，以0b或者0B开头
	/*int a = 0b101;
	int c = 0B0101;
	cout << a << "   " << c << endl;*/
	
	//八进制
	/*int d = 01234;
	int e = 03445;
	cout << "八进制的数" << d << "and" << e << endl;*/

	//十六进制
	int l = 0x101;
	int k = 0x202;
	cout << "十六进制的数" << l << "and" << k << endl;
}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}