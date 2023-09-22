#include<iostream>
using namespace std;
#define MAXSIZE 100
#define OK 1
#define ERROR 0
int e;
typedef int Status;
typedef int ElemType;
typedef struct
{
	ElemType* elem;
	int length;
}SqList;
int input()
{
	int len;
	cin >> len;
	return len;
}
Status InitList(SqList& L,int len)
{
	L.elem = new ElemType[len];
	if (!L.elem) exit(OVERFLOW);
	cout << "请输入" << len << "个元素以完成初始化" << endl;
	for (int i = 0; i < len; i++)
		L.elem[i] = input();
	L.length = len;
	return OK;
}

void printList(SqList& L,int len)
{
	if (len == 0)
	{
		cout << "此表为空" << endl;
		return ;
	}
	cout <<"-----------------"<<endl << "现表如下" << endl;
	for (int i = 0; i < len; i++)
		cout << L.elem[i] << "  ";
	cout << endl;
}
Status ReverseList(SqList& L, int len)
{
	int t;
	if (len < 0)
		return ERROR;
	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		t = L.elem[i], L.elem[i] = L.elem[j], L.elem[j] = t;
	}
	return OK;
}
int main()
{
	SqList L;
	cout << "请输入初始化顺序表的长度" << endl;
	e=input();
	InitList(L, e) ? cout << "初始化成功!" << endl : cout << "初始化失败!" << endl;;
	printList(L,e);
	ReverseList(L,e) ? cout << "置逆操作完成!" << endl : cout << "置逆操作失败!" << endl;;
	printList(L, e);
}