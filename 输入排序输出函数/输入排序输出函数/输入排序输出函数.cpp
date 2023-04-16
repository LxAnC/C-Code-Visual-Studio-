/*
程序名：输入排序输出函数.cpp
程序功能：三个函数分别进行输入数组，排序数组，输出数组的功能
作者：陆宣臣
日期：2023.4.10
*/
#include <iostream>
using namespace std;
void input(int a[])
{
    int i;
    for (i = 0; i < 10; i++)
        cin >> a[i];
}
void output(int a[])
{
    int i;
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
}
void sorted(int a[])
{
    int i, j, k;
    for(i=1;i<10;i++)
        for (j = 0; j < 10 - i; j++)
        {
            if (a[j] <= a[j + 1])
            {
                k = a[j];
                a[j] = a[j + 1];
                a[j + 1] = k;
            }
      }
    cout << "排序后的数组为:" << endl;
    for (i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int a[10];
    int i, j, s;
    cout << "^^^^^^^^主程序开始^^^^^^^^"<< endl;
    cout << "转入输入数组元素函数……" << endl;
    input(a);
    cout << "输入数组元素函数执行成功" << endl;
    cout << "转入排序数组元素函数……" << endl;
    sorted(a);
    cout << "转入排序数组函数执行成功" << endl;
    cout << "转入输出数组元素函数……" << endl;
    output(a);
    cout << "转入输出数组元素函数执行成功" << endl;
    cout << "^^^^^^主程序结束^^^^^^^^";
    return 0;

}
