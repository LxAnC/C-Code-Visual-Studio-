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
	person operator + (person&);
	int a;
	int b;
};
person person::operator+(person& p)
{
	person temp;
	temp.a = this->a + p.a;
	temp.b = this->b + p.b;
	return temp;
}
int main()
{
	person p1(10,20), p2(20,30);
	person p3 = p1 + p2;
	cout << p3.a << "  " << p3.b;
}