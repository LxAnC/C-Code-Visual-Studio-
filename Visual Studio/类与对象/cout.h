#include <iostream>
using namespace std;
class Date {
private:
    int month, day, year;
public:
    // ���캯��
    Date(int m, int d, int y);
    // ���ƹ��캯��
    Date(const Date& other);
    // ��������
    ~Date();
    // ��������
    void input();
    // �������
    void output();
    // �ж��Ƿ�Ϊ����
    bool isLeapYear();
    // �����������
    int tomorrow();
    // ���ǵ���ĵڶ�����
    int dayOfYear();
    // ���ڼ���һ������������
    int addDays(int days);
    // ��������֮����������
    int operator-(Date& other);
}