#include<iostream>
#include<algorithm>
using namespace std;	
int left, right, root;
void Buildheap(int a[], int start, int end)
{
	int dad = start;
	int son = dad * 2 + 1;
	while (son <= end)
	{
		if (son + 1 <= end&&a[son]<a[son+1])
			son++;
		if (a[dad] < a[son])
		{
			swap(a[dad], a[son]);
			dad = son;
			son = dad * 2 + 1;
		}
	}

}
void sort_heap(int a[], int len)
{
	for (int i = len / 2 - 1; i >= 0; i--)
		Buildheap(a, i, len - 1);
	for (int j = len - 1; j > 0; j--)
	{
		swap(a[0], a[j]);
		Buildheap(a, 0, j - 1);
	}
}
int main()
{
	int a[] = { 1,3,6,4,9,7,8,5,2,1,0,98,33,55 }, i, j, len = 14;
	sort_heap(a, len);
	for (int i = 0; i < 14; i++)
		cout << a[i] << " ";
}