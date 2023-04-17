/*
程序名：求圆面积.cpp
程序功能：定义一个默认值函数求圆面积
作者:lxc
日期：2023.4.17
*/
#include<iostream>
using namespace std;
double Area(double r,double PI=3.14)
{
    return r * r * PI;
}
int main()
{
    double r;
    cout << "请输入圆的半径:" << endl;
    cin >> r;
    cout << "圆的面积是:" << Area(r);
    return 0;
}