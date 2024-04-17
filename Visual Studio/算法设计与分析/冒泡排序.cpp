#include<iostream>
#include<algorithm>
using namespace std;
int a[1000001] = {9, 5, 6, 8, 7, 2, 1, 3, 2, 0};//��ʼ��
int len=10;//����
int i, j;
//�Ż����ð��(��ӱ�־λ��ʵ����ǰ����,������������O(n^2))
//�ȶ��Ϳռ临�Ӷ�o(1)
void BubbleSort()
{
	for (i = 0; i < len - 1; i++)
	{	
		int flag = 0;//��־�Ƿ��ź���
		for (j = 0; j < len - 1 - i; j++)
		{
			if (a[j + 1] < a[j])
			{
				swap(a[j + 1], a[j]);
				flag = 1;//ֻҪ������Ҫ�������flag��־ֵ
			}
		}
		if (flag == 0) break;//��ʾ�Ѿ��ź���;
	}
}
//��ͳð������O(n^2)ʱ�临�Ӷ�,��õ������ΪO(n)
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