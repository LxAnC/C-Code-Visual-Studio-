#include<iostream>
#include<fstream>
using namespace std;
void test01()
{
	ofstream ofs;
	ofs.open("text.txt", ios::app);
	ofs << "姓名：" << "李四" << endl;
		ofs<<"性别"<<"男";
	ofs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}