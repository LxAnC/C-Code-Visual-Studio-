#include"student.h"
StudentInfo::~StudentInfo() {
	;
}
void StudentInfo::student() {
	cout << "请输入学生姓名，学号，专业" << endl;
	cout << "------------------------" << endl;
	cin >> m_name >> m_id >> m_major;
	cout << "------------------------" << endl;
}
void StudentInfo::show() {
	cout << "学生的信息如下" << endl;
	cout << "------------------------" << endl;
	cout << "姓名:" << m_name << endl;
	cout << "学号:" << m_id << endl;
	cout << "专业:" << m_major << endl;
}
void Grades::sh() {
	cout << "语文:" << c[0] << endl;
	cout << "高数:" << c[1] << endl;
	cout << "英语:" << c[2] << endl;
	cout << "数据库:" << c[3] << endl;
	cout << "C++:" << c[4] << endl;
	cout << "Javascript:" << c[5] << endl;
	cout << "------------------------" << endl;
}
void Grades::cin1() {
	for (int i = 0; i < 6; i++) {
		cout << "请输入第"<<i+1<<"门科目成绩" << endl;
		cin >> c[i];
		while(c[i] < 0 || c[i]>100)
			cin >> s[i];
	}
}
Grades::~Grades()
{
	;
}
void getAverage(Grades s[])
{
	int i = 0;
	double sum = 0;
	for (i = 0; i < 6; i++)
		sum += c[i];
	avg= sum / 6;
}
void sort(Grades* p) {
	;
}