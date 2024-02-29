#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool cmp(string a, string b)
{
	return a + b > b + a;
}
int main()
{
	int x,b,i=0, n, s = 0, j = 1;
	string a[1000];
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, cmp);
	for (i = 0; i < n; i++)
		cout<< a[i];
}