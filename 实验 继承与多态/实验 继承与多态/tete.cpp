#include"student.h"
void test() {
	Grades s[3];
	for (int i = 0; i < 3; i++)
	{
		s[i].student();
		s[i].cin1();

	}
	Sort(s);
	cout << endl<<"以下是所有同学的信息::" << endl;
	for (int i = 0; i < 3; i++)
	{
		s[i].sh();

	}
}
void StudentInfo::student() {
	cout << "------------------------" << endl;
	cout << "请输入学生姓名，学号，专业" << endl;
	cout << "------------------------" << endl;
	cin >> m_name;
	cin >> m_id;
	while (m_id.length() != 10) {
		cout << "输入错误！请重新输入学号:" << endl;
			cin >> m_id;
	}
	cin>> m_major;
}
void StudentInfo::show() {
	cout << "------------------------" << endl;
	cout << "姓名:" << m_name << endl;
	cout << "学号:" << m_id << endl;
	cout << "专业:" << m_major << endl;
}
void Grades::cin1() {
	for (int i = 0; i < 6; i++) {
		cout << "请输入第" << i + 1 << "门科目成绩：";
		cin >> c[i];
		while (c[i] < 0 || c[i]>100)
		{
			cout << "请输入第" << i + 1 << "门科目成绩：";
			cin >> c[i];
		}
	}
}
void Grades::sh() {
	this->show();
	cout << "语文:" << c[0] << endl;
	cout << "高数:" << c[1] << endl;
	cout << "英语:" << c[2] << endl;
	cout << "MYSQL:" << c[3] << endl;
	cout << "C++:" << c[4] << endl;
	cout << "JS:" << c[5] << endl;
	cout << "平均分：" << this->getAverage()<< endl;
	cout << "------------------------" << endl;
	cout << "------------------------" << endl;
}
void Sort(Grades s []) {
	int i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			if (s[j].getAverage() < s[j + 1].getAverage())
				swap(s[j], s[j + 1]);
}
double Grades::getAverage() {
	int i;
	double s=0;
	for (i = 0; i < 6; i++)
		s += c[i];
	return s / 6;
}