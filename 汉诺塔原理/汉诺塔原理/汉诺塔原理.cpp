/*
程序名：汉诺塔原理.cpp
程序功能：若干的圆盘按一定规则挪到另一根柱子上
作者：陆宣臣
日期：2023.4.10
*/
#include <iostream>
using namespace std;
void move(int x,char a,char c)
{
    cout << "将"<<x<<"号盘子从" << a << "处挪到" << c << "处" << endl;
}
int hanoi(int x, char a, char b, char c)
{
    if (x == 0)
        return 0;
    else
        hanoi(x - 1, a, c, b);
        move(x,a, c);
        hanoi(x - 1, b, a, c);   
}
int main()
{
    int x;
    char a, b, c;
    cout << "请输入第一根柱子上的圆盘数" << endl;
    cin >> x;
    hanoi(x, 'A', 'B', 'C');
}
