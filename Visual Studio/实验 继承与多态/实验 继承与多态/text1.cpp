#include"student.h"
StudentInfo::~StudentInfo() {
	;
}
void StudentInfo::student() {
	cout << "������ѧ��������ѧ�ţ�רҵ" << endl;
	cout << "------------------------" << endl;
	cin >> m_name >> m_id >> m_major;
	cout << "------------------------" << endl;
}
void StudentInfo::show() {
	cout << "ѧ������Ϣ����" << endl;
	cout << "------------------------" << endl;
	cout << "����:" << m_name << endl;
	cout << "ѧ��:" << m_id << endl;
	cout << "רҵ:" << m_major << endl;
}
void Grades::sh() {
	cout << "����:" << c[0] << endl;
	cout << "����:" << c[1] << endl;
	cout << "Ӣ��:" << c[2] << endl;
	cout << "���ݿ�:" << c[3] << endl;
	cout << "C++:" << c[4] << endl;
	cout << "Javascript:" << c[5] << endl;
	cout << "------------------------" << endl;
}
void Grades::cin1() {
	for (int i = 0; i < 6; i++) {
		cout << "�������"<<i+1<<"�ſ�Ŀ�ɼ�" << endl;
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