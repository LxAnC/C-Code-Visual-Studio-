#include<iostream>
using namespace std;
class person {
	
public:
	person() {

	}
	person(int x, int y) {
		a = x;
		b = y;
	}
	int a;
	int b;
};
person operator+(person& p,person &p1)
{
	person temp;
	temp.a = p1.a + p.a;
	return temp;
}
person operator+(person& p, int x)
{
	person temp;
	temp.a = p.a + x;
	return temp;
}
int main()
{
	person p1(10,20), p2(20,30);
	person p3 = operator+(p1,p2);
	person p4 = p1+50;
	cout << p3.a << "  " << p3.b << endl;
	cout << p4.a << "  " << p4.b;
}