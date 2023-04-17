/*
程序名:逆序存放.cpp
功能：利用函数重载的性质写一个能够实现整型数组和字符数组
逆序存放
作者；lxc
日期：2023.4.17
*/
#include<iostream>
using namespace std;
void sort(int a[])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		int t = a[i];
		a[i] = a[9 - i];
		a[9 - i] = t;
	}
}
void sort(char ch[])
{
	int i;
	for (i = 0; i < strlen(ch) / 2; i++)
	{
		int t = ch[i];
		ch[i] = ch[strlen(ch) - 1 - i];
		ch[strlen(ch) - 1 - i] =t;
	}
}
int main()
{
	int i, j, a[10];
	char ch[81];
	cout << "输入一个字符串:" << endl;	
	gets_s(ch);
	cout << "请输入十个数:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}

	sort(a);
	sort(ch);
	cout << "逆序存储后的结果为:" << endl;
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	puts(ch);
	return 0;
}