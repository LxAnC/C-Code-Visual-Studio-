//��������������������ϲ�Ϊһ����������������,Ҫ����������ʹ��ԭ����������Ĵ洢�ռ�,
//������ռ�������Ĵ洢�ռ�,���в��������ظ�������
//1 2 3 4 
//2 3 4 5
#include<iostream>
#define OK 1
#define NO 0
using namespace std;
typedef  int Elemtype;
typedef  int Status;
typedef struct Lnode {
	Elemtype data;
	struct Lnode* next;
}Lnode, * Linklist;
Linklist L1;
Linklist L2;
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
Status InitLt(Linklist& L) {
	L = new Lnode;
	L->next = NULL;
	return OK;
}
Status LocalateElem(Linklist& L, int i)
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
		Linklist p = new Lnode;
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
Status InitlongLt(Linklist& L, int length) {
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
		cout << p->data << "  ";
		p = p->next;
	}
	return OK;
}
Status Deletedata(Linklist& L, int i) {
	Linklist p = L; int j = 0;
	while (p && j < i - 1)
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
void intergrate(Linklist& L1, Linklist& L2) //�ϲ����ű�
{
	int f = 1;
	Linklist P1= new Lnode;
	Linklist P2 = new Lnode;
	P1= L1->next;
	P2 = L2->next;
	while (P2) {
		if (P2->data > P1->data)
		{
			f++; 
			P1 = P1->next;
		}
		else if(P2->data == P1->data)
		{
			P2 = P2->next;
		}
		else
		{
			InsertElem(L1, f, P2->data);
			P2 = P2->next;
			f++;
		}
		if (P1 == NULL) 
		{
			InsertElem(L1, f++, P2->data);
			P2 = P2->next;
		}
	}
}
void menu(Linklist &L) {
	int n;
	while (1) {
		cout << "------------------------" << endl;
		cout << "|  1.��ʼ���ձ�             |" << endl;
		cout << "|  2.��ʼ��ָ�����ȵı�|" << endl;
		cout << "|  3.�����                    |" << endl;
		cout << "|  4.����                       |" << endl;
		cout << "|  5.ɾ��                       |" << endl;
		cout << "|  6.ȡԪ��                    |" << endl;
		cout << "|  7.�����������      |" << endl;
		cout << "|  0.�˳�                       |" << endl;
		cout << "------------------------" << endl;
		cout << "��ѡ��Ҫִ�еĲ���" << endl;
		switch (n = input()) {
		case 1:InitLt(L) ? suc() : fai(); break;
		case 2:cout << "�����볤��" << endl; InitlongLt(L, input()) ? suc() : fai(); break;
		case 3:Output(L) ? suc() : fai(); break;
		case 4:cout << "���������������Լ�λ��" << endl; InsertElem(L, input(), input()) ? suc() : fai(); break;
		case 5:cout << "��������Ҫɾ������λ��" << endl; Deletedata(L, input()) ? suc() : fai(); break;
		case 6:cout << "������Ҫȡ��Ԫ�ص�λ�ú�" << endl; LocalateElem(L, input()) ? suc() : fai(); break;
		case 7:cout << "���ڼ��㵥������......" << endl; LinkLength(L) ? suc() : fai(); break;
		case 0:cout << "see you" << endl; break;
		}
		if (n == 0)
			break;
	}
}

int main()
{
	cout << "��һ���������" << endl;
	menu(L1);//�������õ�һ��������
	cout << "�ڶ����������" << endl;
	menu(L2);//���õڶ���������
	cout << "���кϲ�" << endl;
	intergrate(L1, L2);
	Output(L1);
}