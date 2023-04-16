/*
程序名：猜数游戏.cpp
程序功能：任意输入一个三位数，通过一些规则求最后的商
作者：陆宣臣
日期：2023.2.27
*/

#include <iostream>//预处理命令
using namespace std;//命名空间的声明
int main()
{
    int x, y;    //声明变量
    float s;     //声明商的变量
    cout << "请任意输入一个三位数：" << endl;  //输入的提示信息
    cin >> x;                                  //输入数
    x = x * 1000 + x;                          //求商
    cout<<"最后的商是：" << endl<< x / 7 / 11 / 13 ;   //输出商
    return 0;
}
