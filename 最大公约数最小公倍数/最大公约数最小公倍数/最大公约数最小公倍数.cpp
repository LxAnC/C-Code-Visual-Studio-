/*
程序名：最大公约数最小公倍数.cpp
功能：输出最大公约数最小公倍数定义两个函数
作者：陆宣臣
日期：2023.4.10
*/
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    else
        return gcd(b - a, b);
}
int main()
{
    int x, y;
    cout << "请输入两个数："<<endl;
    cin >> x >> y;
    cout << "两数的最大公约数是" << gcd(x, y) << endl;
    cout << "两数的最小公倍数是" << x * y / gcd(x, y) << endl;
    return 0;
}