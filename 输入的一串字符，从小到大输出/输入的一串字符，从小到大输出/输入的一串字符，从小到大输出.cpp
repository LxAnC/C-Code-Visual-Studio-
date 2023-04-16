/*
程序名：输入一串字符，从小到大输出
程序功能：将字符串内的字符从小到大排列
作者：陆宣臣
日期：2023.3.27
*/
#include <iostream>
using namespace std;
int main()
{
    int i, j=0 ;
    char ch[81],t;
    gets_s(ch);
    i = 0;
    while (ch[i++])j++;
    for (int k=1; k < j; k++)
    {
        for (i = 0; i < j - 1; i++)
            if (ch[i] > ch[i + 1])
                t = ch[i],
                ch[i] = ch[i + 1],
                ch[i + 1] = t;
    }
    puts(ch);
    return 0;
}
