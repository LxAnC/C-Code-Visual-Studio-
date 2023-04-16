/*
程序名：三位数各位和.cpp
程序功能：输入一个三位数，输出各位数字之和
作者：陆宣臣
日期：2023.2.27
*/
#include <iostream>    //预处理命令
using namespace std;   //命名空间声明
int main()
{
    int i, s;      //定义所需变量
    cout << "请输入一个三位整数：" << endl;  //输入的提示信息
    cin >> i;                                //输入i
    s = i / 100 + i / 10 % 10 + i % 10;      //计算各位数之和
    cout << "该数各位数之和为："  << endl<< s;  //输出以及提示信息
    return 0;  //结束
}


