#include<iostream>
using namespace std;
void sort1(int* a, int* b, int* c)
{
	int max = *a;
	int t;
	if (*a >= *b)
		t = *a, * a = *b, * b = t;
	if(*a>=*c)
		t = *a, * a = *c, * c = t;
	if(*b>=*c)
		t = *b, * b = *c, * c = t;
}
void sort2(int& a, int& b, int& c)
{
	int t;
	if (a >= b)
		t = a,  a = b,  b = t;
	if (a >= c)
		t = a,  a = c,  c = t;
	if (b >= c)
		t = b,  b = c,  c = t;
}
int main()
{
	int a, b, c,x;
	cout << "请输入三个整数" << endl;
	cin >> a >> b >> c;
	while (1)
	{
		cout << "请输入排序方案序号 1 or 2" << endl;
		cin >> x;
		if (x == 1)
		{
			cout << "排序前" << endl;
			cout << a << " " << b << " " << c << endl;
		    sort1(&a, &b, &c);
		}
			
		else if (x == 2)
		{
			cout << "排序前" << endl;
			cout << a << " " << b << " " << c << endl;
			sort2(a, b, c);
		}
		else
		{
			cout << "输入错误请重新输入" << endl;
			continue;
		}
		break;
	}
	cout << "排序后" << endl;
	cout << a << " " << b << " " << c << endl;
	return 0;
	
}