#include<iostream>
using namespace std;
#define MAXQSIZE 100
#define OK 1
#define ERROR 0
typedef  int QElemtype;
typedef  int Status;
typedef struct {
	QElemtype* base;
	int front;
	int rear;
}cqQueue;
cqQueue cq;
int input()
{
	int x;
	cin >> x;
	return x;
}
Status initqueue(cqQueue& cq)
{
	cq.base = new QElemtype[MAXQSIZE];
	if (!cq.base)
		exit(OVERFLOW);
	cq.front = cq.rear = 0;
	return OK;
}
Status enqueue(cqQueue& cq, QElemtype x)
{
	if ((cq.rear + 1) % MAXQSIZE == cq.front)
	{
		cout << "����" << endl;
		return ERROR;
	}
	cq.base[cq.rear] = x;
	cq.rear = (cq.rear + 1) % MAXQSIZE;
	return OK;
}
Status delqueue(cqQueue& cq, int x)
{
	if (cq.front == cq.rear)
	{
		cout << "�ӿ�,�޷�����" << endl;
		return ERROR;
	}
	x = cq.base[cq.front];
	cout << "���ӵ�Ԫ����" << x << endl;
	cq.front = (cq.front + 1) % MAXQSIZE;
	return OK;
}
Status queuelength(cqQueue& cq)
{
	int len=(cq.rear - cq.front + MAXQSIZE) % MAXQSIZE;
	cout << "����Ϊ" << len << endl;
	return OK;
}
void Menu() {
	int n = 1;
	while (n) {
		cout << "------------------------" << endl;
		cout << "*  1.��ʼ��ѭ������    *" << endl;
		cout << "*  2.���              *" << endl;
		cout << "*  3.����              *" << endl;
		cout << "*  4.��ѭ�����г���    *" << endl;
		cout << "*  0.�˳�              *" << endl;
		cout << "------------------------" << endl;
		cout << "��ѡ��Ҫִ�еĲ���" << endl;
		n = input();
		switch (n)
		{
		case 1:initqueue(cq) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 2:cout << "��������ӵ�Ԫ��" << endl; enqueue(cq, input()) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 3:delqueue(cq,0) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 4:queuelength(cq) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 0:n = 0;
		default:cout << "����������ѡ��!" << endl;
		}
	}
}
int main()
{
	Menu();
}