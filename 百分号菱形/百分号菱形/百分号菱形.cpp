/*
程序名：百分号菱形.cpp
程序功能：百分号输出菱形
作者：陆宣臣
日期：2023.3.20
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = -9; i <= 9; i++) {
        for (j = 1; j <= abs(i); j++)
            cout << ' ';
        for (j = 1; j <= 2 * (10 - abs(i)) - 1; j++)
            cout << '%';
        cout << endl;

    }
}