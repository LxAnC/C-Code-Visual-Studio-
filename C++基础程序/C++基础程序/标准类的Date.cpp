#include"cout.h"
#include <iostream>
int main() {
    Date date(3, 15, 2022);
    date.output();
    if (date.isLeapYear()) {
        cout << "2022年是闰年" << endl;
    }
    else {
        cout << "2022年不是闰年" << endl;
    }
    Date tomorrow = date.tomorrow();
    tomorrow.output();
    int dayOfYear = date.dayOfYear();
    cout << "2022年的第" << dayOfYear << "天" << endl;
    Date newDate = date.addDays(10);
    newDate.output();
    Date otherDate(3, 10, 2022);
    int diff = date - otherDate;
    cout << "两个日期相差" << diff << "天" << endl;
    system("pause");
    return 0;
}