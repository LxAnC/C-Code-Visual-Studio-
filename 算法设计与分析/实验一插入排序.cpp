#include<iostream>
using namespace std;
int i = 0;
int main()
{
	int a[1000];
	while (cin >> a[i])
	{
		i++;
		if (cin.get() == '\n')
			break;
	}
}