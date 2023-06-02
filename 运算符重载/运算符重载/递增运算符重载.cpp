#include<iostream>
using namespace std;
class person {
	friend ostream& operator<<(ostream& cout, person m);

public:
	person() {

	}
	person(int x, int y) {
		a = x;
		b = y;
	}
	//前置递增
	person &operator++()
{
	this->a++;
	this->b++;
	return *this;
}
	//后置递增
	person operator++(int)
{
		person p = *this;
	    a++;
	    b++;
		return p;
}
private:
	int a;
	int b;
};
//前置递增

 ostream& operator<<(ostream &cout,person  m)
{
	 cout << m.a << "  " << m.b;
	 return cout;
}
//person operator+(person& p, int x)
//{
//	person temp;
//	temp.a = p.a + x;
//	return temp;
//}
int main()
{
	person p1(10, 20);
	cout << p1++ << endl;
	cout << p1 << endl;
	//cout << p4.a << "  " << p4.b;
}