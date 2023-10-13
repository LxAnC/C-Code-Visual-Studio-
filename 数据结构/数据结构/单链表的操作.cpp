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
Status InsertElem(Linklist& L, int i, Elemtype x)
{
	if (i <= 0)
		return NO;
	else {
		Linklist p=new Lnode;
		p = L;
		int j = 0;
		while (p->next && (j < i - 1))
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
Status InitlongLt(Linklist& L,int length) {
	L = new Lnode;
	L->next = NULL;
	for (int i = 1; i <= length; i++) {
		InsertElem(L, i, input());
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
int LinkLength(Linklist& L) {
	int i = 0;
	Linklist P = new Lnode;
	P = L->next;
	while (P != NULL) {
		P = P->next; i++;
	}
	if (i)
		cout << "长度为" << i << endl;
	else
		cout << "单链表为空" << endl;
	return i;
}
Status ReserveLink(Linklist& L)
{
	if (L == NULL)
		return NO;
	Linklist P = L->next;
	L->next = NULL;
	while (P)
	{

        InsertElem(L, 1, P->data);
		P = P->next;
	}
	
	return OK;
}
void menu() {
	int n;
	while (1) {
	cout << "------------------------" << endl;
	cout << "|  1.初始化空表             |" << endl;
	cout << "|  2.初始化指定长度的表|" << endl;
	cout << "|  3.输出表                    |" << endl;
	cout << "|  4.插入                       |" << endl;
	cout << "|  5.删除                       |" << endl;
	cout << "|  6.定位                       |" << endl;
	cout << "|  7.取元素                    |" << endl;
	cout << "|  8.置逆                       |" << endl;
	cout << "|  9.输出单链表长度      |" << endl;
	cout << "|  0.退出                       |" << endl;
	cout << "------------------------" << endl;
	cout << "请选择要执行的操作" << endl;
		switch (n = input()) {
		case 1:InitLt(L) ? suc() : fai(); break;
		case 2:cout << "请输入长度" << endl; InitlongLt(L, input()) ? suc() : fai(); break;
		case 3:Output(L) ? suc() : fai(); break;
		case 4:cout << "请输入插入的数据以及位置" << endl; InsertElem(L, input(), input()) ? suc() : fai(); break;
		case 5:cout << "请输入想要删除数的位置" << endl; Deletedata(L, input()) ? suc() : fai(); break;
		case 6:cout << "请输入定位的数据" << endl; DingW(L, input()) ? suc() : fai(); break;
		case 7:cout << "请输入要取的元素的位置号" << endl; LocalateElem(L, input()) ? suc() : fai(); break;
		case 8:cout << "正在进行置逆操作......" << endl; ReserveLink(L) ? suc() : fai(); break;
		case 9:cout << "正在计算单链表长度......" << endl; LinkLength(L) ? suc() : fai(); break;
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