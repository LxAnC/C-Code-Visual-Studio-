/*
程序名：从键盘上输入一行字符，按照从小到大输出.cpp
程序功能：从键盘上输入一行字符，按照从小到大输出
作者：陆宣臣
日期：2023.3.27
*/
#include <iostream>
using namespace std;
int main()
{
    char ch[81];
    int i,j=0,min,k,pos;
    gets_s(ch);
    for (i = 0; ch[i]; i++)
        j++;
    for (i = 0; i <j-1; i++) {
        min = ch[i];
        pos = i;
        for (k = i+1; k <=j - 1; k++) {
            if (min > ch[k]) {
                min = ch[k];
                pos = k;
            }
            ch[pos] = ch[i];
            ch[i] = min;
        }
    }
    puts(ch);
    return 0;

}
