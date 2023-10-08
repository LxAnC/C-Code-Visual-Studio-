#include<iostream>
#define OK 1
#define NO 0
using namespace std;
typedef  int Elemtype;
typedef  int Status;
typedef struct Lnode {
	Elemtype data;
	struct Lnode *next;
}Lnode,*Linklist;
Linklist L;
int input()
{
	int x;
	cin >> x;
	return x;
}
void suc() {
	cout << "执行成功" << endl;
}
void fai() {
	cout << "执行失败" << endl;
}
Status InitLt(Linklist &L) {
    L=new Lnode;
	L->next = NULL;
	return OK;
}
Status LocalateElem(Linklist &L, int i)
{
	Linklist p = L;
		int j = 0;
		if (i <= 0) return NO;
	while (p || j < i - 1)
	{
		p = p->next, j++;
	}
	cout << "此位置上数据为" << p->data << endl;
	return OK;
}
Status InitlongLt(Linklist& L,int length) {
	L = new Lnode;
	L->next = NULL;
	for (int i = 1; i <= length; i++) {
		Linklist s = new Lnode;
		s->next = L->next;
		cout << "请输入长度为" << length << "个数的数据" << endl;
			s->data = input();
		L->next = s;
	}
	if (length < 1)
		return NO;
	else
		return OK;
}
Status Output(Linklist& L)
{
	Linklist p = L->next;
	while (p)
	{
		cout << p->data <<"  ";
		p = p->next;
	}
	return OK;
}
Status InsertElem(Linklist& L,int i,Elemtype x)
{
	if (i <= 0)
		return NO;
	else {
		Linklist p;
		p = L;
		int j = 0;
		while (p && (j <=i - 1))
		{
			p = p->next; j++;
		}
		Linklist s = new Lnode;
		s->data = x;
		s->next = p->next;
		p->next = s;
		return OK;
	}
}

Status DingW(Linklist& L, int i)
{
	Linklist p = L, j = 0;
	if (i < 0)
		return NO;
	while (p) {
		p = p->next, j++;
		if (p->data == i)
			break;
	}
	cout << "定位到数据位置为:" << j << endl;
	return OK;
}
Status Deletedata(Linklist& L, int i) {
	Linklist p = L; int j = 0;
	while(p&&j<i-1)
	{
		p = p->next, j++;
	}
	if (!(p->next) || (j < i - 1))
		return NO;
	Linklist s = p->next;
	p->next = s->next;
	delete s;
	return OK;
}
void menu() {
	int n;
	while (1) {
	cout << "------------------------" << endl;
	cout << "|  1.初始化空表        |" << endl;
	cout << "|  2.初始化指定长度的表|" << endl;
	cout << "|  3.输出表            |" << endl;
	cout << "|  4.插入              |" << endl;
	cout << "|  5.删除              |" << endl;
	cout << "|  6.定位              |" << endl;
	cout << "|  7.取元素            |" << endl;
	cout << "|  0.退出              |" << endl;
	cout << "------------------------" << endl;
	cout << "请选择要执行的操作" << endl;
	
		switch (n = input()) {
		case 1:InitLt(L) ? suc() : fai(); break;
		case 2:cout << "请输入长度" << endl; InitlongLt(L, input()) ? suc() : fai(); break;
		case 3:Output(L) ? suc() : fai(); break;
		case 4:cout << "请输入插入的位置以及数据" << endl; InsertElem(L, input(), input()) ? suc() : fai(); break;
		case 5:cout << "请输入想要删除数的位置" << endl; Deletedata(L, input()) ? suc() : fai(); break;
		case 6:cout << "请输入定位的数据" << endl; DingW(L, input()) ? suc() : fai(); break;
		case 7:cout << "请输入要取的元素的位置号" << endl; LocalateElem(L, input()) ? suc() : fai(); break;
		case 0:cout << "see you" << endl; break;
		}
		if (n == 0)
			break;
	}
}
int main()
{
	menu();
}