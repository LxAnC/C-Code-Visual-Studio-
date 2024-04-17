//#include<iostream>
//using namespace std;
////公有继承
//class base {
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//class base2 {
//	int b;
//	void set() {
//		b = 100;
//	}
//};
////多继承方式
//class Son :public base,public base2 {
//public:
//	int x;
//	int a;
//	int m() {
//		a = 10;
//	}
//protected:
//	int y;
//private:
//	int z;
//};
//int main()
//{
//	Son s;
//	s.a = 20;
//	s.base::a = 30;
//	cout << s.a << "asd" << s.base::a;
//	cout << sizeof(s) << endl;
//
//}