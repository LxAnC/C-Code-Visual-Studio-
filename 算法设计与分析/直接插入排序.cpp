//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[1000];
//	int s = 0,i,j,temp;
//	while (cin >> a[s])
//		{
//			s++;
//			if (cin.get() == '\n')
//				break;
//	}
//	for (i = 1; i < s; i++)
//	{
//		if (a[i] < a[i - 1])
//		{
//			temp = a[i];
//			for (j = i - 1; j >= 0 && a[j] > temp; j--)
//				a[j + 1] = a[j];
//			a[j + 1] = temp;
//		}
//	}
//	for (i = 0; i < s; i++)
//		cout << a[i] << " ";
//}
#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,temp;
	int s = 0;
	while (cin >> a[s])
	{
		s++;
		if (cin.get() == '\n')
			break;
	}
	for (i = 1; i < s; i++)
	{
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] < temp; j--)
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;
	}
	for (i = 0; i < s; i++)
		cout << a[i] << " ";
}