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
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	//4.������
	//��һ�ֶ�ȡ�ķ�ʽ
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}*/
	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	//������
	/*string buf;
	while(getline(ifs, buf))
	{
		cout << buf << endl;
	}*/
	//������
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