#include<iostream>
using namespace std;
int main()
{
	//指针
	//获取任何变量的地址
	//方法:&
	int a;
	char b;
	bool c;
	string d;
	
	int* pa=(int *) & b;
	char* pb=(char*) & a;
	bool* pc=&c;
	string* pd=&d;
	cout << pa << endl;
	cout << pb << endl;
	cout << pc<< endl;
	cout << pd<< endl;
	//这里可以发现char类型变量的地址与其他类型不太一样
	//一系列的”烫烫烫烫……“
	//那么第一种办法就是强制转换为void*
	/*cout << (void*) & a << endl;
	cout <<(void*) & b << endl;
	cout << (void*) & c << endl;
	cout << (void*) & d << endl;*/
	//第二种办法就是强制转换为整型，但是int太短了，所以我们用longlong
	/*cout << (long long) & a << endl;
	cout << (long long) & b << endl;
	cout << (long long) & c << endl;
	cout << (long long) & d << endl;*/
	  
    //指针变量
	//语法：数据类型 * 变量名
	//数据类型必须是合法的
	//1000001A
	//1000001B
	//1000001C
	//1000001D
	//1000001E
	//指针变量专用于存放变量在内存中的起始地址
	//就是10000001A
	 
	//对指针赋值
	//语法:变量名=&变量名
	//也通俗的称为指向某变量
	//被指向的变量类型叫基类型
	//如果指针和他基类型不一样，会引发警告，使用强制转换
	//即可解决
	/*int* pa = (int*)&b;
	char* pb = (char*)&a;*/

	//指针占用的内存?
	//在64位的计算机上不管什么类型的指针都是8字节
	//在32位就是4字节
	cout << sizeof(pa) << endl;
	cout << sizeof(pb) << endl;
	cout << sizeof(pc) << endl;
	cout << sizeof(pd) << endl;
	system("pause");
	system("cls");
	return 0;
}