#include"cout.h"
#include <iostream>
int main() {
    Date date(3, 15, 2022);
    date.output();
    if (date.isLeapYear()) {
        cout << "2022��������" << endl;
    }
    else {
        cout << "2022�겻������" << endl;
    }
    int tomorrow = date.tomorrow();
    date.tomorrow().output();
    int dayOfYear = date.dayOfYear();
    cout << "2022��ĵ�" << dayOfYear << "��" << endl;
    Date newDate = date.addDays(10);
    newDate.output();
    Date otherDate(3, 10, 2022);
    int diff = date - otherDate;
    cout << "�����������" << diff << "��" << endl;
    system("pause");
    return 0;
}