#include<iostream>
#include<fstream>
using namespace std;
//二进制文件 写文件
class Person
	{
	public:
		char m_Name[64];//姓名
		int m_Age;// 年龄
	};
void test01()
{
	ofstream ofs;
	//ofstream ofs("person.txt", ios::out | ios::binary);
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}