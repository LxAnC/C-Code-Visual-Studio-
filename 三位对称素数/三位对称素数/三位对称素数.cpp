/*
程序名:三位对称素数.cpp
程序功能:求三位数素数且对称
作者:陆宣臣
日期:2023.3.20
*/
#include <iostream>
using namespace std;
int main()
{
    int x, i, s, b,j;
    cout << "三位素数且对称如下:" << endl;
    for(i=100;i<=999;i++){
        b = 0;
        for ( j= 2; j <= i / 2; j++)
            if (i % j == 0)
                break;
        if (j > i / 2)
            b =1;
        if (b == 1) {
            x = i;
            s = 0;
            while (x) {
                s = s * 10 + x % 10;
                x /= 10;
            }
            if (s == i)
                cout << i << endl;
        }
    }
}
