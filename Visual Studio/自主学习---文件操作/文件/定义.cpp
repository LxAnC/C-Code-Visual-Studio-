#include<iostream>
#include<fstream>
using namespace std;
//int main() {
//	//2.����������
//	ofstream ofs;
//	//3.���ļ�
//	//ofs.open("�ļ�·��", �򿪷�ʽ);
//	//5.д����
//	//ofs<<"д�������"
//	//6.�ر��ļ�
//	ofs.close();
//}
void test01()
{
	ofstream ofs;
	ofs.open("text.txt",ios::out);
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "����:18" << endl;
	ofs.close();
}
int main() {
	test01();
	system("pause");
	return 0;
}