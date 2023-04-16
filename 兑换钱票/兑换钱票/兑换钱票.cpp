/*
程序名:兑换钱票.cpp
程序功能:将100元钱兑换成面值为10元、5元、1元的钱,要有10元、5元和1元
作者:陆宣臣
日期:2023.3.20
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j, c,s=0;
    for(i=1;i<=10;i++)
        for (j = 1; j <= 20; j++) {
            c = (100 - 10 * i - 5 * j);
            if (c + i * 10 + j * 5 == 100&&c>0) {
                cout << "10元:" << i << endl << "5元:" << j << endl << "1元:" << c << endl << endl;
                s++;
            }
     }
    cout << "共计" << s << "种";
}
