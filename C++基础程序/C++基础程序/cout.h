#include <iostream>
using namespace std;
class Date {
private:
    int month, day, year;
public:
    // 构造函数
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }
    // 复制构造函数
    Date(const Date& other) {
        month = other.month;
        day = other.day;
        year = other.year;
    }
    // 析构函数
    ~Date() {
        ;
    }

    // 输入日期
    void input() {
        cout << "请输入日期（格式为 MM DD YYYY）：";
        cin >> month >> day >> year;
    }
    // 输出日期
    void output() {
        cout << month << "/" << day << "/" << year << endl;
    }
    // 判断是否为闰年
    bool isLeapYear() {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    // 求明天的日期
    Date tomorrow() {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        if (day < daysInMonth[month - 1]) {
            return Date(month, day + 1, year);
        }
        else if (month == 12) {
            return Date(1, 1, year + 1);
        }
        else {
            return Date(month + 1, 1, year);
        }
    }
    // 求是当年的第多少天
    int dayOfYear() {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        int totalDays = 0;
        for (int i = 0; i < month - 1; i++) {
            totalDays += daysInMonth[i];
        }
        totalDays += day;
        return totalDays;
    }
    // 日期加上一个整数的日期
    Date addDays(int days) {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        int totalDays = dayOfYear() + days;
        int newMonth = month;
        int newDay = day;
        while (totalDays > daysInMonth[newMonth - 1]) {
            totalDays -= daysInMonth[newMonth - 1];
            newMonth++;
            if (newMonth > 12) {
                newMonth = 1;
                year++;
            }
        }
        newDay = totalDays;
        return Date(newMonth, newDay, year);
    }
    // 计算日期之间相差的天数
    int operator-(Date& other) {
        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
        if (isLeapYear()) {
            daysInMonth[1] = 29;
        }
        int totalDays1 = dayOfYear();
        int totalDays2 = other.dayOfYear();
        for (int i = 0; i < month - 1; i++) {
            totalDays1 += daysInMonth[i];
        }
        for (int i = 0; i < other.month - 1; i++) {
            totalDays2 += daysInMonth[i];
        }
        return abs(totalDays1 - totalDays2);
    }
}; 
