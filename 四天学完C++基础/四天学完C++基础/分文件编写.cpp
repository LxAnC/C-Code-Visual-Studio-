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
	//int l = 0x101;
	//int k = 0x202;
	//cout << "十六进制的数" << l << "and" << k << endl;\

	//C++11的longlong类型
	/*long long a = 2147483647;
	long b = 2147483660;
	cout << a << "   " << sizeof(a) << endl;
	cout << b << "   " << sizeof(b) << endl;*/
	//windows下的long是4字节也就是32位，longlong为8字节
	//linux下的long和longlong是一样的宽度都8字节

	//浮点数据类型
	/*float a = 12345.2323;
	double b = 12345.2323;
	long double c = 12345.2323;
	cout << a <<"  "<< sizeof(a) << "   " << b << "  " << sizeof(b) << endl;
	cout << c << "  " << sizeof(c);*/
	//windows下的double和long double位数都是8位
	//linux下的double是8位而；long double是16位
	//float a = 1234123211233.123123;
	//double b = 1234123213.123123121;
	//long double c = 123412321321313.123123;
	//cout << a << "   " << b << "  " << c << endl;
	//printf("float a=%f\n", a);
	//printf("double b=%lf\n", b);
	//printf("long double c=%lf\n", c);
	

	//对齐输出格式可以使用\t
	//cout << "1\t西施" << endl;
	//cout << "20\t杨玉环" << endl;
	//cout << "3000\t露娜" << endl;

	//不让转义字符生效的如何执行是
	/*string s = R"(D:\Download\Windows.Cowabunga.Lite)";
	cout << s;*/

	//string类的简单用法,可以使用+号连接字符串
	/*string a;
	string b;
	cin >> a;
	cin >> b;
	a = "姓名：" + a + "，性别：" + b;
	cout << a;\*/

}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}