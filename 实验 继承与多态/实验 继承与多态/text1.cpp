#include"student.h"
#include<iostream>
using namespace std;
StudentInfo::StudentInfo() {
	cout << "请输入学生姓名,学生学号,专业名" << endl;
	cin >> name;
	cin >> id;
	cin >> sname;
}
StudentInfo::~StudentInfo() {
	cout<<"析构函数已调用"<<endl;
}
void Grades::show() {
	cout << "------------------------" << endl;
	cout << "姓名:" << name << endl;
	cout << "学号:" << id << endl;
	cout << "专业:" << sname << endl;
	cout << "------------------------" << endl;
}
Grades::Grades() {
	cout << "请输入学生科目的成绩：" << endl;
	cin >> s1>>s2>>s3>>s4>>s5>>s6;

}
