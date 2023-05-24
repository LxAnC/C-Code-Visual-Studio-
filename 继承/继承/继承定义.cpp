#include<iostream>
using namespace std;
class Base {
public:
	int a;
	int b;
	int sum() {
		cout << "sum函数已运行！" << endl;
	}
protected:
	int c;
private:
	int x;
	int y;
};
class Son :public Base {
public:
	int a, b, c;
	void c() {
		cout << "子元素" << endl;
	}
};
void test() {
	Son s;
	s.sum();
	s.c();
}
int main() {
	
}