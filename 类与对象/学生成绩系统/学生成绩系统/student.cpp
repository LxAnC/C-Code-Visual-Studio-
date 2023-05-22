#include<iostream>
#include<string>
#include"class.h"
using namespace std;
int student::count = 0;
student::student() {
    ;
}
student::student(string num, string name, int score1, int score2, int score3) {
    this->num = num;
    this->name = name;
    this->score[0] = score1;
    this->score[1] = score2;
    this->score[2] = score3;
    count++; //每构造一个对象，学生人数加1
}

student::~student() {
    count--; //每删除一个对象，学生人数减1
}

int student::stu_sum() {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += score[i];
    }
    return sum;
}

void kc_dj(student stu) {
    cout << "数学成绩等级：" << ((stu.score[0] >= 90 && stu.score[0] <= 100) ? "优秀" :
        ((stu.score[0] >= 80 && stu.score[0] < 90) ? "良好" :
            ((stu.score[0] >= 70 && stu.score[0] < 80) ? "中等" :
                ((stu.score[0] >= 60 && stu.score[0] < 70) ? "及格" : "不及格")))) << endl;

    cout << "英语成绩等级：" << ((stu.score[1] >= 90 && stu.score[1] <= 100) ? "优秀" :
        ((stu.score[1] >= 80 && stu.score[1] < 90) ? "良好" :
            ((stu.score[1] >= 70 && stu.score[1] < 80) ? "中等" :
                ((stu.score[1] >= 60 && stu.score[1] < 70) ? "及格" : "不及格")))) << endl;

    cout << "计算机成绩等级：" << ((stu.score[2] >= 90 && stu.score[2] <= 100) ? "优秀" :
        ((stu.score[2] >= 80 && stu.score[2] < 90) ? "良好" :
            ((stu.score[2] >= 70 && stu.score[2] < 80) ? "中等" :
                ((stu.score[2] >= 60 && stu.score[2] < 70) ? "及格" : "不及格")))) << endl;
}

void student::print() {
    cout << "学号：" << num << endl;
    cout << "姓名：" << name << endl;
    cout << "数学成绩：" << score[0] << "，等级：";
    if (score[0] >= 90 && score[0] <= 100) {
        cout << "优秀" << endl;
    }
    else if (score[0] >= 80 && score[0] < 90) {
        cout << "良好" << endl;
    }
    else if (score[0] >= 70 && score[0] < 80) {
        cout << "中等" << endl;
    }
    else if (score[0] >= 60 && score[0] < 70) {
        cout << "及格" << endl;
    }
    else {
        cout << "不及格" << endl;
    }
    cout << "英语成绩：" << score[1] << "，等级：";
    if (score[1] >= 90 && score[1] <= 100) {
        cout << "优秀" << endl;
    }
    else if (score[1] >= 80 && score[1] < 90) {
        cout << "良好" << endl;
    }
    else if (score[1] >= 70 && score[1] < 80) {
        cout << "中等" << endl;
    }
    else if (score[1] >= 60 && score[1] < 70) {
        cout << "及格" << endl;
    }
    else {
        cout << "不及格" << endl;
    }
    cout << "计算机成绩：" << score[2] << "，等级：";
    if (score[2] >= 90 && score[2] <= 100) {
        cout << "优秀" << endl;
    }
    else if (score[2] >= 80 && score[2] < 90) {
        cout << "良好" << endl;
    }
    else if (score[2] >= 70 && score[2] < 80) {
        cout << "中等" << endl;
    }
    else if (score[2] >= 60 && score[2] < 70) {
        cout << "及格" << endl;
    }
    else {
        cout << "不及格" << endl;
    }
    cout << "总分：" << stu_sum() << endl;
}