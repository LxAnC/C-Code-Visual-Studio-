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
	cout << "ִ�гɹ�" << endl;
}
void fai() {
	cout << "ִ��ʧ��" << endl;
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
	cout << "��λ��������Ϊ" << p->data << endl;
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
	cout << "��λ������λ��Ϊ:" << j << endl;
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
	Linklist P = new Lnode; //����
	P = L->next; //ָ��ͷ���֮��
	while (P != NULL) { //�ж�
		P = P->next; i++; //���α���,ͬʱ����
	}
	if (i)
		cout << "����Ϊ" << i << endl; //�������
	else
		cout << "������Ϊ��" << endl;//Ϊ0��Ϊ������
	return i; //����
}
Status ReserveLink(Linklist& L)
{
	if (L == NULL)//Ϊ������Ҫ����
		return NO;
	Linklist P = L->next;//��ͷ���֮��ĸ�ֵ��P
	L->next = NULL; //ͷ���ض�
	while (P)//ѭ������Ϊ��ǰL->next��Ϊ��
	{

        InsertElem(L, 1, P->data); //���ò��뷽��
		P = P->next; //���α���
	}
	
	return OK;//�ɹ����OK
}
void menu() {
	int n;
	while (1) {
	cout << "------------------------" << endl;
	cout << "|  1.��ʼ���ձ�             |" << endl;
	cout << "|  2.��ʼ��ָ�����ȵı�|" << endl;
	cout << "|  3.�����                    |" << endl;
	cout << "|  4.����                       |" << endl;
	cout << "|  5.ɾ��                       |" << endl;
	cout << "|  6.��λ                       |" << endl;
	cout << "|  7.ȡԪ��                    |" << endl;
	cout << "|  8.����                       |" << endl;
	cout << "|  9.�����������      |" << endl;
	cout << "|  0.�˳�                       |" << endl;
	cout << "------------------------" << endl;
	cout << "��ѡ��Ҫִ�еĲ���" << endl;
		switch (n = input()) {
		case 1:InitLt(L) ? suc() : fai(); break;
		case 2:cout << "�����볤��" << endl; InitlongLt(L, input()) ? suc() : fai(); break;
		case 3:Output(L) ? suc() : fai(); break;
		case 4:cout << "���������������Լ�λ��" << endl; InsertElem(L, input(), input()) ? suc() : fai(); break;
		case 5:cout << "��������Ҫɾ������λ��" << endl; Deletedata(L, input()) ? suc() : fai(); break;
		case 6:cout << "�����붨λ������" << endl; DingW(L, input()) ? suc() : fai(); break;
		case 7:cout << "������Ҫȡ��Ԫ�ص�λ�ú�" << endl; LocalateElem(L, input()) ? suc() : fai(); break;
		case 8:cout << "���ڽ����������......" << endl; ReserveLink(L) ? suc() : fai(); break;
		case 9:cout << "���ڼ��㵥������......" << endl; LinkLength(L) ? suc() : fai(); break;
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