//#include<iostream>
//using namespace std;
//int max(int a, int b);
//int min(int a, int b);
//void print(int no, string message);
#include"tools.h"
#include"girls.h"
int main()
{
	/*cout << "max(5,8)=" <<  max(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	cout << "min(5,8)=" << min(5, 8) << endl;
	int a = 5;
	int b = 10;*/
	//cout << sizeof(int) << endl;
	//cout << sizeof(string) << endl;//string���ʾ�����
	//cout << sizeof(double) << endl;
	//cout << sizeof(float) << endl;
	//cout << sizeof(bool) << endl;

	//�������̵ĺ���������һ���ģ�Ϊʲô�أ�long����linux����8λ

	//cout << "sizeof(short)=" << sizeof(short) << endl;
	//cout << "sizeof(unsigned short)=" << sizeof(unsigned short) << endl;
	//cout << "sizeof(int)=" << sizeof(int) << endl;
	//cout << "sizeof(unsigned int)=" << sizeof(unsigned int) << endl;
	//cout << "sizeof(long)=" << sizeof(long) << endl;
	//cout << "sizeof(unsigned long)=" << sizeof(unsigned long) << endl;
	/*unsigned short a = -2;
	cout << a << endl;
	cout << 2 <<2;*/
	//������Χ���ݻᱻ�ض�


	//���͵���д

	//�����ƣ���0b����0B��ͷ
	/*int a = 0b101;
	int c = 0B0101;
	cout << a << "   " << c << endl;*/

	//�˽���
	/*int d = 01234;
	int e = 03445;
	cout << "�˽��Ƶ���" << d << "and" << e << endl;*/

	//ʮ������
	//int l = 0x101;
	//int k = 0x202;
	//cout << "ʮ�����Ƶ���" << l << "and" << k << endl;\

	//C++11��longlong����
	/*long long a = 2147483647;
	long b = 2147483660;
	cout << a << "   " << sizeof(a) << endl;
	cout << b << "   " << sizeof(b) << endl;*/
	//windows�µ�long��4�ֽ�Ҳ����32λ��longlongΪ8�ֽ�
	//linux�µ�long��longlong��һ���Ŀ�ȶ�8�ֽ�

	//������������
	/*float a = 12345.2323;
	double b = 12345.2323;
	long double c = 12345.2323;
	cout << a <<"  "<< sizeof(a) << "   " << b << "  " << sizeof(b) << endl;
	cout << c << "  " << sizeof(c);*/
	//windows�µ�double��long doubleλ������8λ
	//linux�µ�double��8λ����long double��16λ
	//float a = 1234123211233.123123;
	//double b = 1234123213.123123121;
	//long double c = 123412321321313.123123;
	//cout << a << "   " << b << "  " << c << endl;
	//printf("float a=%f\n", a);
	//printf("double b=%lf\n", b);
	//printf("long double c=%lf\n", c);


	//���������ʽ����ʹ��\t
	//cout << "1\t��ʩ" << endl;
	//cout << "20\t����" << endl;
	//cout << "3000\t¶��" << endl;

	//����ת���ַ���Ч�����ִ����
	/*string s = R"(D:\Download\Windows.Cowabunga.Lite)";
	cout << s;*/

	//string��ļ��÷�,����ʹ��+�������ַ���
	/*string a;
	string b;
	cin >> a;
	cin >> b;
	a = "������" + a + "���Ա�" + b;
	cout << a;\*/
	//ȫ�ǳ�����ʱ��ǧ��Ҫ��+�����ӣ���Ϊ����뱨��
	//���б�дstring���͵�ʱ����԰Ѽ����ַ�������д
	//string a = "asdadsad"
	//	"12312"
	//	"½������"
	//	"asd";
	//cout << a;

	//�Ƿ���Է���
	//string a = "asdasdsa
	//	sadasdasa��ʵ��ʵ
	//	 ";
		//���б���������


//����������
//true��false��ʾ��1��0��
//bool a = true, b = false;
//cin >> a;
//cin >> b;
//cout << "a=" << a << ",b=" << b << endl;
//cout << sizeof(a) << "  " << sizeof(b);
//cout << a + b << endl;


//�ҵ��������ͱ������ڴ棬�����������ǿ���޸�Ϊ8
//bool b = false;
//char* c = (char*)&b;
//*c = 8;
//cout << "b=" << b << endl;
//
//
//
//�������ͱ�������unsigned int
//true��false���﷨��һ������

//����ת��
//�Զ�����ת��/��ʽ����ת��
//����
//�����޷��ŵ����ͻ���˵���������͵ĳ���
//��Ϊ��Χ������
//���Ա���ȡ������
//unsigned short a = 65535+1;
//����Χ����֮��Ľ�ȡ����
//unsigned short 01111111111111111111
//unsigned short 10000000000000000000
//��ȡ���ɸ�λ��ʼ��ȡ�����������ȡ�����Ѿ��Ǻ����0�ˡ����Ի�û��
//cout << a;

//����ǿ������ת�������þ�����Ϣ���ٳ���
//int a =(int)25.55;
//cout << a;

//����ת�����ŵ����ȼ��Ƚϸ���t1����ȷ�����Լ����ţ�t1�ĵڶ�λ��
//���ȼ���ߵ���������


//�������͵ı���
//���Լ�������ƽ̨
//typedef
//�������ͣ�unsigned int ,long long, unsigned long long
//
//typedef unsigned int uint;
//typedef long long  llong;
//typedef unsigned long long ull;
//uint a = 1;
//llong b = 2;
//ull c = 3;
//cout << a << "  " << b << "  " << c << endl;
//cout << sizeof(a) << " " << sizeof(b) << " " << sizeof(c) << endl;

}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int min(int a, int b)
//{
//	return a < b ? a : b;
//}