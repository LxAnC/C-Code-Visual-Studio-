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
	cout << "��������������" << endl;
	cin >> a >> b >> c;
	while (1)
	{
		cout << "���������򷽰���� 1 or 2" << endl;
		cin >> x;
		if (x == 1)
		{
			cout << "����ǰ" << endl;
			cout << a << " " << b << " " << c << endl;
		    sort1(&a, &b, &c);
		}
			
		else if (x == 2)
		{
			cout << "����ǰ" << endl;
			cout << a << " " << b << " " << c << endl;
			sort2(a, b, c);
		}
		else
		{
			cout << "�����������������" << endl;
			continue;
		}
		break;
	}
	cout << "�����" << endl;
	cout << a << " " << b << " " << c << endl;
	return 0;
	
}