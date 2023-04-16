/*
程序名：3乘4矩阵.cpp
程序功能：输出每行的最大值并输出行号
作者：陆宣臣
日期：2023.3.27
*/
#include <iostream>
using namespace std;
int main()
{
    int i,j, a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int max,pos;
    for (i = 0; i < 3; i++)
    {
        max = a[i][0];
        pos = i;
        for (j = 0; j < 4; j++)
        {
            if (max < a[i][j])
                max = a[i][j];
        }
        cout << "在" << pos + 1 << "行上的最大值是" << max << '\t';
        cout << "它的行号和列号分别是：" << i << ' ' << j-1<< endl;
    }
    return 0;
}
