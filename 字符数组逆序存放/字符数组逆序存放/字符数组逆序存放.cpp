/*
程序名：字符数组逆序存放.cpp
功能：字符数组逆序存储
作者：陆宣臣
日期：2023.4.10
*/
#include<iostream>
#include<cstring>
using namespace std;
void cfree(char ch[])
{
	int s = strlen(ch);
	for (int i = 0; i <=s / 2-1; i++)
	{
		int j = ch[i];
		ch[i] = ch[s - i - 1];
		ch[s - i - 1] = j;
	}
}
int main()
{
	int a, i, s;
	char ch[81];
	gets_s(ch);
	cfree(ch);
	puts(ch);
}