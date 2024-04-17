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
		cout << "队满" << endl;
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
		cout << "队空,无法出队" << endl;
		return ERROR;
	}
	x = cq.base[cq.front];
	cout << "出队的元素是" << x << endl;
	cq.front = (cq.front + 1) % MAXQSIZE;
	return OK;
}
Status queuelength(cqQueue& cq)
{
	int len=(cq.rear - cq.front + MAXQSIZE) % MAXQSIZE;
	cout << "长度为" << len << endl;
	return OK;
}
void Menu() {
	int n = 1;
	while (n) {
		cout << "------------------------" << endl;
		cout << "*  1.初始化循环队列    *" << endl;
		cout << "*  2.入队              *" << endl;
		cout << "*  3.出队              *" << endl;
		cout << "*  4.求循环队列长度    *" << endl;
		cout << "*  0.退出              *" << endl;
		cout << "------------------------" << endl;
		cout << "请选择要执行的操作" << endl;
		n = input();
		switch (n)
		{
		case 1:initqueue(cq) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 2:cout << "请输入入队的元素" << endl; enqueue(cq, input()) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 3:delqueue(cq,0) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 4:queuelength(cq) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 0:n = 0;
		default:cout << "请重新输入选项!" << endl;
		}
	}
}
int main()
{
	Menu();
}