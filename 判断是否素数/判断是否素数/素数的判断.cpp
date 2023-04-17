/*
程序名：素数的判断.cpp
程序功能：判断两个数字之间有哪些数是素数
作者：lxc
日期：2023.4.17
*/
#include<iostream>
using namespace std;
int su(int x)
{
	int i;
	for (i = 2; i <= x / 2; i++)
	  if (x % i == 0)
		  break;
	if (i <= x / 2)
		return 0;
	else
		return 1;
}
int main()
{
	int a, b, c=0;
	cout << "请输入两个数;" << endl;
	cin >> a >> b;
	cout << "输出他们之间的素数" << endl;
	if (a > b)
	{
		int t = a; a = b; b = t;
	}
	while(a<=b)
	{
		if (su(a) == 1)
		{
			c++;cout << a << " ";
			if (c % 6 == 0)
				cout << endl;
				
		}
		a++;
	}
	return 0;
}