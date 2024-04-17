#include<iostream>
using namespace std;
////创建基类
//class Base {
//public:
//	//加上关键字virtual
//	 virtual void boot() {
//		cout << "Base已调用" << endl;
//	}
//};
////创建派生类，并加继承
//class Son:public Base {
//public:
//	 void boot() {
//		cout << "Son已调用" << endl;
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
	//此为纯虚函数，不允许直接实例化对象
	//当一个类中存在纯虚函数，即使一个
	//也叫为抽象类
	//
	virtual void boot() = 0;
	void ab() {
		cout << "ab调用" << endl;
	}
};
class Son :public Base {
public:
	int a;
	virtual void boot() {
		cout << "输出红茶!" <<endl;
	}
};
int main() {
	Son s2;
	Base* p = &s2;
	p->boot();
	return 0;
}