#include<iostream>
#include<fstream>
using namespace std;
void test01()
{
	ofstream ofs;
	ofs.open("text.txt", ios::app);
	ofs << "������" << "����" << endl;
		ofs<<"�Ա�"<<"��";
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}