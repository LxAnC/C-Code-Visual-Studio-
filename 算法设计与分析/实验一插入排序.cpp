#include<iostream>
using namespace std;
int s = 0,b,loc,i;
int main()
{
	int a[1000],c=1;
		while (cin >> a[s]) {
		s++;
		if (cin.get() == '\n') {
			break;
		}
	}
	while (c <= s)
	{
		b = a[c];
		for (i = 0; i < c; i++)
			if (b <= a[i])
				loc = i;
		if (b > a[i - 1])
			loc = c;
		if(b == a[loc])
		for (int j = s - 1; j >= c; j--)
			a[j + 1] = a[j];
		a[c] = b; c++;
	}
	for (i = 0; i < s - 1; i++)
		cout << a[i] << " ";
}