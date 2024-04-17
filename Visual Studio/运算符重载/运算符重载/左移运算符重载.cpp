#include<iostream>
using namespace std;
class person {
	//设置他的朋友，这个函数可以访问这个类的所有成员
	friend ostream& operator<<(ostream& c, person& p);
public:
	person() {

	}
	person(int x, int y) {
		a = x;
		b = y;
	}
	//通常都是设置为私有，那么
	//方法就是友元
	//friend
private:
	int a;
	int b;
};
//利用成员函数重载 左移运算符 无法正常重载
//通常不会利用成员函数来重载<<运算符
//因为无法判断cout在左侧
//例如p.operator<<(p);

//利用全局函数来重载
//本质 operator()
//引用本身就是起别名
ostream & operator<<(ostream &c, person &p)
{
	c << p.a << " " << p.b ;
	return c;
}
int main()
{
	person p1(1,2), p2(5,8);
	cout << p1<<endl;
	cout << p2;
}