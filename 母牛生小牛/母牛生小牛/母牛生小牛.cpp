/*
程序名:母牛生小牛.cpp
程序功能:若一头母牛， 从出生起第四个年头开始每年生头母牛，按此规律，第n年时有多少头母牛?
作者:陆宣臣
日期:2023.3.20
*/
#include<iostream> 
using namespace std;
int main()
{
    int i, n, a1=1, a2=1, a3=1, a4;
    cout << "请输入一个正整数: " << endl;
    cin >> n;
    for(i=4; i<=n; i++){
	  a4=a1+a3;
      a1=a2;
      a2=a3;
      a3=a4;
}
    cout << "第" << n << "年有" << a4 << "头母牛";
}
