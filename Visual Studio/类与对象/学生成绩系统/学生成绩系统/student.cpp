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
    count++; //ÿ����һ������ѧ��������1
}

student::~student() {
    count--; //ÿɾ��һ������ѧ��������1
}

int student::stu_sum() {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += score[i];
    }
    return sum;
}

void kc_dj(student stu) {
    cout << "��ѧ�ɼ��ȼ���" << ((stu.score[0] >= 90 && stu.score[0] <= 100) ? "����" :
        ((stu.score[0] >= 80 && stu.score[0] < 90) ? "����" :
            ((stu.score[0] >= 70 && stu.score[0] < 80) ? "�е�" :
                ((stu.score[0] >= 60 && stu.score[0] < 70) ? "����" : "������")))) << endl;

    cout << "Ӣ��ɼ��ȼ���" << ((stu.score[1] >= 90 && stu.score[1] <= 100) ? "����" :
        ((stu.score[1] >= 80 && stu.score[1] < 90) ? "����" :
            ((stu.score[1] >= 70 && stu.score[1] < 80) ? "�е�" :
                ((stu.score[1] >= 60 && stu.score[1] < 70) ? "����" : "������")))) << endl;

    cout << "������ɼ��ȼ���" << ((stu.score[2] >= 90 && stu.score[2] <= 100) ? "����" :
        ((stu.score[2] >= 80 && stu.score[2] < 90) ? "����" :
            ((stu.score[2] >= 70 && stu.score[2] < 80) ? "�е�" :
                ((stu.score[2] >= 60 && stu.score[2] < 70) ? "����" : "������")))) << endl;
}

void student::print() {
    cout << "ѧ�ţ�" << num << endl;
    cout << "������" << name << endl;
    cout << "��ѧ�ɼ���" << score[0] << "���ȼ���";
    if (score[0] >= 90 && score[0] <= 100) {
        cout << "����" << endl;
    }
    else if (score[0] >= 80 && score[0] < 90) {
        cout << "����" << endl;
    }
    else if (score[0] >= 70 && score[0] < 80) {
        cout << "�е�" << endl;
    }
    else if (score[0] >= 60 && score[0] < 70) {
        cout << "����" << endl;
    }
    else {
        cout << "������" << endl;
    }
    cout << "Ӣ��ɼ���" << score[1] << "���ȼ���";
    if (score[1] >= 90 && score[1] <= 100) {
        cout << "����" << endl;
    }
    else if (score[1] >= 80 && score[1] < 90) {
        cout << "����" << endl;
    }
    else if (score[1] >= 70 && score[1] < 80) {
        cout << "�е�" << endl;
    }
    else if (score[1] >= 60 && score[1] < 70) {
        cout << "����" << endl;
    }
    else {
        cout << "������" << endl;
    }
    cout << "������ɼ���" << score[2] << "���ȼ���";
    if (score[2] >= 90 && score[2] <= 100) {
        cout << "����" << endl;
    }
    else if (score[2] >= 80 && score[2] < 90) {
        cout << "����" << endl;
    }
    else if (score[2] >= 70 && score[2] < 80) {
        cout << "�е�" << endl;
    }
    else if (score[2] >= 60 && score[2] < 70) {
        cout << "����" << endl;
    }
    else {
        cout << "������" << endl;
    }
    cout << "�ܷ֣�" << stu_sum() << endl;
}