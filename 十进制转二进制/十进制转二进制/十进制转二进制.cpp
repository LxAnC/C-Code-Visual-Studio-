/*
程序名：十进制转二进制.cpp
程序功能：将十进制数转成二进制
作者：陆宣臣
日期：2023.3.27
*/
#include <iostream>
using namespace std;
int main()
{
    int x,s,j=0;
    char ch[81] ;
    cout << "请输入一个十进制数"<<endl;
    cin >> x;
    while(x) {
        ch[j++] = x % 2+48;
        x /= 2;
    }
    j -= 1;
    while (j >= 0) {
        cout << ch[j] << ' ';
        j--;
    }
        return 0;
}