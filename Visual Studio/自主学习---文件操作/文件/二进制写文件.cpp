#include<iostream>
#include<fstream>
using namespace std;
//�������ļ� д�ļ�
class Person
	{
	public:
		char m_Name[64];//����
		int m_Age;// ����
	};
void test01()
{
	ofstream ofs;
	//ofstream ofs("person.txt", ios::out | ios::binary);
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "����",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}