#include"student.h"
void test() {
	Grades s[3];
	for (int i = 0; i < 3; i++)
	{
		s[i].student();
		s[i].cin1();

	}
	Sort(s);
	cout << endl<<"����������ͬѧ����Ϣ::" << endl;
	for (int i = 0; i < 3; i++)
	{
		s[i].sh();

	}
}
void StudentInfo::student() {
	cout << "------------------------" << endl;
	cout << "������ѧ��������ѧ�ţ�רҵ" << endl;
	cout << "------------------------" << endl;
	cin >> m_name;
	cin >> m_id;
	while (m_id.length() != 10) {
		cout << "�����������������ѧ��:" << endl;
			cin >> m_id;
	}
	cin>> m_major;
}
void StudentInfo::show() {
	cout << "------------------------" << endl;
	cout << "����:" << m_name << endl;
	cout << "ѧ��:" << m_id << endl;
	cout << "רҵ:" << m_major << endl;
}
void Grades::cin1() {
	for (int i = 0; i < 6; i++) {
		cout << "�������" << i + 1 << "�ſ�Ŀ�ɼ���";
		cin >> c[i];
		while (c[i] < 0 || c[i]>100)
		{
			cout << "�������" << i + 1 << "�ſ�Ŀ�ɼ���";
			cin >> c[i];
		}
	}
}
void Grades::sh() {
	this->show();
	cout << "����:" << c[0] << endl;
	cout << "����:" << c[1] << endl;
	cout << "Ӣ��:" << c[2] << endl;
	cout << "MYSQL:" << c[3] << endl;
	cout << "C++:" << c[4] << endl;
	cout << "JS:" << c[5] << endl;
	cout << "ƽ���֣�" << this->getAverage()<< endl;
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