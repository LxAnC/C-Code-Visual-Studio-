#include<iostream>
using namespace std;
int main()
{
	//ָ��
	//��ȡ�κα����ĵ�ַ
	//����:&
	int a;
	char b;
	bool c;
	string d;
	
	int* pa=(int *) & b;
	char* pb=(char*) & a;
	bool* pc=&c;
	string* pd=&d;
	cout << pa << endl;
	cout << pb << endl;
	cout << pc<< endl;
	cout << pd<< endl;
	//������Է���char���ͱ����ĵ�ַ���������Ͳ�̫һ��
	//һϵ�еġ��������̡�����
	//��ô��һ�ְ취����ǿ��ת��Ϊvoid*
	/*cout << (void*) & a << endl;
	cout <<(void*) & b << endl;
	cout << (void*) & c << endl;
	cout << (void*) & d << endl;*/
	//�ڶ��ְ취����ǿ��ת��Ϊ���ͣ�����int̫���ˣ�����������longlong
	/*cout << (long long) & a << endl;
	cout << (long long) & b << endl;
	cout << (long long) & c << endl;
	cout << (long long) & d << endl;*/
	  
    //ָ�����
	//�﷨���������� * ������
	//�������ͱ����ǺϷ���
	//1000001A
	//1000001B
	//1000001C
	//1000001D
	//1000001E
	//ָ�����ר���ڴ�ű������ڴ��е���ʼ��ַ
	//����10000001A
	 
	//��ָ�븳ֵ
	//�﷨:������=&������
	//Ҳͨ�׵ĳ�Ϊָ��ĳ����
	//��ָ��ı������ͽл�����
	//���ָ����������Ͳ�һ�������������棬ʹ��ǿ��ת��
	//���ɽ��
	/*int* pa = (int*)&b;
	char* pb = (char*)&a;*/

	//ָ��ռ�õ��ڴ�?
	//��64λ�ļ�����ϲ���ʲô���͵�ָ�붼��8�ֽ�
	//��32λ����4�ֽ�
	cout << sizeof(pa) << endl;
	cout << sizeof(pb) << endl;
	cout << sizeof(pc) << endl;
	cout << sizeof(pd) << endl;
	system("pause");
	system("cls");
	return 0;
}