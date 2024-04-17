#include<iostream>
#include<algorithm>
using namespace std;
int a[1000001] = {9, 5, 6, 8, 7, 2, 1, 3, 2, 0};//初始化
int len=10;//长度
int i, j;
//优化后的冒泡(添加标志位来实现提前跳出,不过最坏情况仍是O(n^2))
//稳定和空间复杂度o(1)
void BubbleSort()
{
	for (i = 0; i < len - 1; i++)
	{	
		int flag = 0;//标志是否排好序
		for (j = 0; j < len - 1 - i; j++)
		{
			if (a[j + 1] < a[j])
			{
				swap(a[j + 1], a[j]);
				flag = 1;//只要发现需要排序更新flag标志值
			}
		}
		if (flag == 0) break;//表示已经排好序;
	}
}
//传统冒泡排序O(n^2)时间复杂度,最好的情况则为O(n)
//void BubbleSort()
//{
//	for (i= 0; i < len - 1; i++)
//	{
//		for (j = 0; j < len-1-i; j++)
//		{
//			if (a[j+1] < a[j])
//			{
//				swap(a[j+1],a[j]);
//			}
//		}
//	}
//}
void Output()
{
	for (i = 0; i < len; i++)
		cout << a[i] << " ";
}
int main()
{
	BubbleSort();
	Output();
}