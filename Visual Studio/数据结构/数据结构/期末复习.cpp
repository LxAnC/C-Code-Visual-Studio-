#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int i = 0, x;
	cin >> x;
	while (x)
	{
		a[i++] = x;
		cin >> x;
	}
	while (--i >= 0)
	{
		cout << a[i] << " ";
	}

}
