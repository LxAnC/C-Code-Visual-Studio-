#include<iostream>
using namespace std;
////��������
//class Base {
//public:
//	//���Ϲؼ���virtual
//	 virtual void boot() {
//		cout << "Base�ѵ���" << endl;
//	}
//};
////���������࣬���Ӽ̳�
//class Son:public Base {
//public:
//	 void boot() {
//		cout << "Son�ѵ���" << endl;
//	}
//private:
//	int b;
//	int a;
//};
//int main() {
//	Son s1;
//	Base *b1=&s1;
//	b1->boot();
//	return 0;
//}
class Base {
public:
	//��Ϊ���麯����������ֱ��ʵ��������
	//��һ�����д��ڴ��麯������ʹһ��
	//Ҳ��Ϊ������
	//
	virtual void boot() = 0;
	void ab() {
		cout << "ab����" << endl;
	}
};
class Son :public Base {
public:
	int a;
	virtual void boot() {
		cout << "������!" <<endl;
	}
};
int main() {
	Son s2;
	Base* p = &s2;
	p->boot();
	return 0;
}