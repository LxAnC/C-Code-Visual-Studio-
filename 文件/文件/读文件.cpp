#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void test01()
{
	ifstream ifs;
	ifs.open("text.txt", ios:: in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读数据
	//第一种读取的方式
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}*/
	//第二种
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	//第三种
	/*string buf;
	while(getline(ifs, buf))
	{
		cout << buf << endl;
	}*/
	//第四种
	//char c;
	//while ((c = ifs.get())!=EOF)//eof end of file
	//{
	//	cout << c;
	//}
	//ifs.close();
	char d;
	while ((d = ifs.get()) != EOF)
	{
		cout << d;
	}
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}