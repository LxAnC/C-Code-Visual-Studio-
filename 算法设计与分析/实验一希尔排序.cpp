//Ï£¶ûÅÅÐò
#include<iostream>
#include<algorithm>
int i, o;
using namespace std;
int main()
{
	int a[1000],s=0,n,i,d,j,ans;
	while (cin >> a[s])
	{
		s++;
		if (cin.get() == '\n')
			break;
	}
	n = s;
	while (1)
	{
		n /= 2;
		for (i = 0; i < n; i++)
		{
			for (j = i + n; j < s; j += n){
				ans = a[j];
			for (d = j - n; d >= 0 && a[d] < ans; d -= n)
				a[d + n] = a[d]; 
			a[d + n] = ans;}
		}
		if (n == 1)
			break;
}
    for (i = 0; i < s; i++)
        cout << a[i] << " ";
	
}