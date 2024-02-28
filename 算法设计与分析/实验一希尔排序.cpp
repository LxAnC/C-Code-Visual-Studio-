#include<iostream>
#include<algorithm>
int i, o;
using namespace std;
int main()
{
	int a[11];
	int x,i=0;
	while (cin >> a[i++]) {
		if (i == 10)
			break;
	}
	x = i;
	cin >> a[10];
	while (1) {
		x = x / 2;
		for (i = 0; i < x; i++)
		{
			i = a[i];
			o = a[i + x ];
			a[i] = max(i,o );
			a[i + x - 1] = min(i, o);
		}
		if (x == 1)
			break;

	}
	for (i = 0; i < 11; i++)
		cout << a[i] << " ";
}