#include<iostream>
#include<string>
#include"class.h"
using namespace std;
int main() {
    int N;
    cout << "请输入学生个数：";
    cin >> N;
    student* stu_arr = new student[N]; //创建对象数组
    for (int i = 0; i < N; i++) {
        string num, name;
        int score1, score2, score3;
        cout << "请输入第" << i + 1 << "个学生的学号，姓名，数学成绩，英语成绩，计算机成绩：" << endl;
        cin >> num >> name >> score1 >> score2 >> score3;
        stu_arr[i] = student(num, name, score1, score2, score3); //调用构造函数创建对象
    }
    for (int i = 0; i < N; i++) {
        cout << "第" << i + 1 << "个学生的信息：" << endl;
        stu_arr[i].print(); //输出学生信息
        kc_dj(stu_arr[i]); //输出每门课程的等级
        cout << endl;
    }
    delete[] stu_arr; //释放对象数组
    return 0;
}