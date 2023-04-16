/*
程序名:两数和.cpp
程序功能:输入两个数，并求和
作者:陆宣臣
日期:2023.2.20
*/
#include <iostream>  //预处理命令
using namespace std; //命名空间
int main()
{
    int a, b;//定义两个变量
    cout << "请输入两个数并以空格分隔:" << endl;  //输出提示信息
    cin >> a >> b;                                //输入语句
    cout << "两数之和为:" << endl;                //输出提示信息
    cout << a + b;                                //输出两数之和
    return 1; //结束语句
}