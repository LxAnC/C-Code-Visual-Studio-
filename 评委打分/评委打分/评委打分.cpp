/*
程序名：评委打分.cpp
程序功能：除去最高分最低分算平均分
作者：陆宣臣
日期：2023.3.13
*/
#include <iostream>
#include <iomanip>   //定义头文件输出小数位
using namespace std;
int main()
{
    int max, min, sum, x, i = 2;  //定义变量，i定为2因为在循坏前已输入一个
    cin >> x;                     //输入第一个数
    max = min = sum = x;          //装载最大数最小数还有总和
    float b;                      //定义平均分变量
    while(i <= 10) {              //循坏输入变量评分
        cin >> x;
        if (max < x)              //与最大值判断，比他大则他成为最大值
            max = x;
        if (min > x)              //与最小值判断，比他小则他成为最小值
            min = x;
        sum += x;                 //总和把每一个x都加上
        i++;                      //循坏控制变量
    }
    b = (sum - max - min) / 8.0;  //算出平均分
    cout << "除去最高分和最低分，最后得分是:" <<fixed<<setprecision(3)<<b;//输出平均分并保留三位小数
    return 0;
}
