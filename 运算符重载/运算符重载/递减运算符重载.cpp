#include<iostream>
using namespace std;
class person {
	friend ostream& operator<<(ostream& c, person a);

public:
	person() { ; }
	person(int a, int b) :x(a), y(b) {}
	//Ç°ÖÃ--ÔËËã·û
	person & operator--() 
	{
		x--;
		y--;
		return *this;
	}
	person operator--(int)
	{
		person p = *this;
		x--;
		y--;
		return p;
	}
	
private:
	int x;
	int y;
};
ostream& operator<<(ostream& c, person a) {
	c << a.x << " " << a.y;
	return c;
}
void test1() {
	person p(1, 2);
	cout << p--<<endl;
	cout << p<<endl;
	cout << --p<<endl;
	cout << p;
}
int main()
{
	test1();
	system("pause");
	return 0;
}