//#include<iostream>
//#include<algorithm>
//using namespace std;	
//int left, right, root;
//void Buildheap(int a[], int start, int end)
//{
//	int dad = start;
//	int son = dad * 2 + 1;
//	while (son <= end)
//	{
//		if (son + 1 <= end&&a[son]>a[son+1])
//			son++;
//		if (a[dad] > a[son])
//		{
//			swap(a[dad], a[son]);
//			dad = son;
//			son = dad * 2 + 1;
//		}
//		else
//			return ;
//	}
//
//}
//void sort_heap(int a[], int len)
//{
//	for (int i = len / 2 - 1; i >= 0; i--)
//		Buildheap(a, i, len - 1);
//	for (int j = len - 1; j > 0; j--)
//	{
//		swap(a[0], a[j]);
//		Buildheap(a, 0, j - 1);
//	}
//}
//int main()
//{
//	int a[] = { 1,3,6,4,9,7,8,5,2,1,0,98,33,55 };
//	int len = sizeof(a)/sizeof(a[0]);
//	sort_heap(a, len);
//	for (int i = 0; i <len; i++)
//		cout << a[i] << " ";
//}
#include<iostream>
#include<algorithm>
using namespace std;
void sort(int a[], int start, int end)
{
	int f = start;
	int s = f * 2 + 1;
	while (s <= end)
	{
		if (a[s] < a[s + 1] && s + 1 <= end)
			s++;
		if (a[s] > a[f])
		{
			swap(a[s], a[f]);
			f = s;
			s = f * 2 + 1;
		}
		else
		{
			return;
		}
	}
}
int main()
{
	int a[] = { 1,98,2,87,34,76 };
	int len = sizeof(a) / sizeof(a[0]);
	//¿ªÊ¼¶ÑÅÅ
	for (int i = len / 2 - 1; i >= 0; i--)
		sort(a, i, len);
	for (int j = len - 1; j > 0; j--)
	{
		swap(a[0], a[j]);
		sort(a, 0, j - 1);
	}
	for (int j = 0; j < len; j++)
		cout << a[j] << " ";
}