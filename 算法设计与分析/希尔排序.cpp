////Ï£¶ûÅÅĞò
//#include<iostream>
//#include<algorithm>
//int i, o;
//using namespace std;
//int main()
//{
//	int a[1000],s=0,n,i,d,j,ans;
//	while (cin >> a[s])
//	{
//		s++;
//		if (cin.get() == '\n')
//			break;
//	}
//	n = s;
//	while (1)
//	{
//		n /= 2;
//		for (i = 0; i < n; i++)
//		{
//			for (j = i + n; j < s; j += n){
//				ans = a[j];
//		for (d = j - n; d >= 0 && a[d] < ans; d -= n)
//				a[d + n] = a[d]; 
//			a[d + n] = ans;}
//		}
//		if (n == 1)
//			break;
//}
//    for (i = 0; i < s; i++)
//        cout << a[i] << " ";
//	
//}
#include<iostream>
using namespace std;
int main()
{
	int a[1000], s = 0, i, j,step,ans,k;
	while (cin >> a[s])
	{
		s++;
		if (cin.get() == '\n')
			break;
	}
	step = s;
	while(1)
	{
		step /= 2;
		for (i = 0; i < step; i++)
		{
			for (j = i + step; j < s; j += step)
			{
				ans = a[j];
				for (k = j - step; k >= 0 && a[k] > ans; k -= step)
					a[k + step] = a[k];
					a[k+step] = ans;
			}

		}
		if (step == 1)
		{
			break;
		}
	}
	for (i = 0; i < s; i++)
		cout << a[i] << " ";
	
}