#include <iostream>
using namespace std;
class Date {
private:
    int month, day, year;
public:
    // 构造函数
    Date(int m, int d, int y);
    // 复制构造函数
    Date(const Date& other);
    // 析构函数
    ~Date();
    // 输入日期
    void input();
    // 输出日期
    void output();
    // 判断是否为闰年
    bool isLeapYear();
    // 求明天的日期
    int tomorrow();
    // 求是当年的第多少天
    int dayOfYear();
    // 日期加上一个整数的日期
    int addDays(int days);
    // 计算日期之间相差的天数
    int operator-(Date& other);
}