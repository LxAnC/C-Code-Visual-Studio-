/*
程序名：明天几号.cpp
程序功能：给出某天的日期，求它的下一天的日期
作者：陆宣臣
日期：2023.3.6
*/
#include <iostream>
using namespace std;
int main()
{
    int year, mouth, day;//定义年月日三个变量year,mouth,day
    cout << "请输入三个整数代表着年月日例如：1998 3 1:" << endl;//提示信息并举例
    cin >> year >> mouth >> day;      //输入年月日
    switch (mouth)                    //编写switch语句判断
    {
    case 1:case 3:case 5:case 7:  
    case 8:case 10:      //有31天的月份抛开12月因为12月31日之后是下一年
        if (day == 31)   
            mouth += 1, day = 1;  //31天直接月份进1
        else day++; break;    //其他天数直接进1
    case 4:case 6:case 9:case 11://有30天的月份抛开2月因为2月只有28日和29日根据闰平年判断
        if (day == 30)      
            mouth += 1, day = 1; //进1月份与日期
        else day++; break;    //直接加一普通月份
    case 12:    //判断十二月份
        if (day == 31) 
            year += 1, mouth = 1, day = 1; 
        else day++; break;  //其他天数直接进
    case 2:   //判断2月
        if (day == 29)  //闰年的29日进3月份
            mouth = 3, day = 1;
        else if (day == 28 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))  //如果到了28日判断是否闰年
            day = 29;
        else if(day==28)  //不是闰年且28日直接进3月份
            day = 1, mouth = 3;
        else day++;   //其他天数++
    }
    cout << "明天的日期是:" << endl;  //输出提示
    cout << year << ' ' << mouth << ' ' << day;  //输出明天的日期
    return 0;
}