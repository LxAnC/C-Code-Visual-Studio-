/*
程序名：杨辉三角.cpp
程序功能：输出10行杨辉三角
作者：陆宣臣
日期：2023.3.27
*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n; // 用户输入的行数
    n = 10;
    int yanghui[10][10]; // 定义二维数组
    for (int i = 0; i < n; i++)
    {
        yanghui[i][0] = 1;
        yanghui[i][i] = 1;
    }
    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            yanghui[i][j] = yanghui[i - 1][j - 1] + yanghui[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 18; j >=2*i; j--)
            cout << ' ';
        for (int j = 0; j <= i; j++)
        {
            printf("%4d", yanghui[i][j]);
        }
        cout << endl;
    }
    return 0;
}
