#include<iostream>
#include<string>
#include"class.h"
using namespace std;
int main() {
    int N;
    cout << "������ѧ��������";
    cin >> N;
    student* stu_arr = new student[N]; //������������
    for (int i = 0; i < N; i++) {
        string num, name;
        int score1, score2, score3;
        cout << "�������" << i + 1 << "��ѧ����ѧ�ţ���������ѧ�ɼ���Ӣ��ɼ���������ɼ���" << endl;
        cin >> num >> name >> score1 >> score2 >> score3;
        stu_arr[i] = student(num, name, score1, score2, score3); //���ù��캯����������
    }
    for (int i = 0; i < N; i++) {
        cout << "��" << i + 1 << "��ѧ������Ϣ��" << endl;
        stu_arr[i].print(); //���ѧ����Ϣ
        kc_dj(stu_arr[i]); //���ÿ�ſγ̵ĵȼ�
        cout << endl;
    }
    delete[] stu_arr; //�ͷŶ�������
    return 0;
}