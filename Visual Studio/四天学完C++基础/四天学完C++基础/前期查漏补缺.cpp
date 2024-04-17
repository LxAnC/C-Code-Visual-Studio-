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
	//全是常量的时候千万不要加+号连接，因为会编译报错
	//多行编写string类型的时候可以把几个字符串分行写
	//string a = "asdadsad"
	//	"12312"
	//	"陆续惨你"
	//	"asd";
	//cout << a;

	//是否可以分离
	//string a = "asdasdsa
	//	sadasdasa啊实打实
	//	 ";
		//不行编译器报错


//布尔型数据
//true和false表示着1和0；
//bool a = true, b = false;
//cin >> a;
//cin >> b;
//cout << "a=" << a << ",b=" << b << endl;
//cout << sizeof(a) << "  " << sizeof(b);
//cout << a + b << endl;


//找到布尔类型变量的内存，把里面的数据强制修改为8
//bool b = false;
//char* c = (char*)&b;
//*c = 8;
//cout << "b=" << b << endl;
//
//
//
//布尔类型本质上是unsigned int
//true和false是语法上一个处理

//类型转换
//自动类型转换/隐式类型转换
//……
//关于无符号的类型或者说是所有类型的长度
//因为范围被超过
//所以被截取精度了
//unsigned short a = 65535+1;
//当范围超出之后的截取规则
//unsigned short 01111111111111111111
//unsigned short 10000000000000000000
//截取是由高位开始截取，所以这个截取到的已经是后面的0了。所以会没有
//cout << a;

//采用强制类型转换可以让警告信息不再出现
//int a =(int)25.55;
//cout << a;

//类型转换符号的优先级比较高是t1，不确定可以加括号（t1的第二位）
//优先级最高的是数组封号


//数据类型的别名
//可以兼容其他平台
//typedef
//常用类型：unsigned int ,long long, unsigned long long
//
//typedef unsigned int uint;
//typedef long long  llong;
//typedef unsigned long long ull;
//uint a = 1;
//llong b = 2;
//ull c = 3;
//cout << a << "  " << b << "  " << c << endl;
//cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << endl;

}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}