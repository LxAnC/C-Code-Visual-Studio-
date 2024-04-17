#include<iostream>
using namespace std;
#define MAXSIZE 100
#define OK 1
#define ERROR 0
typedef  int Selemtype;
typedef  int Status;
typedef struct {
	Selemtype* base;
	Selemtype* top;
	int stacksize;
}Sqstack; 
Sqstack S;
int input()
{
	int x;
	cin >> x;
	return x;
}
Status push(Sqstack& S,Selemtype x)
{
	//�ж�ջ�Ƿ�����
	if (S.top - S.base == S.stacksize)
	{
		cout << "ջ��,�޷���ջ=_=" << endl;
		return ERROR;
	}
	*S.top++ = x;
	//��ֵ��ֵ��top��ͬʱ++�����ƶ�topָ��
		return OK;
}
Status pop(Sqstack& S,Selemtype e)
{
	if (S.top == S.base)
	{
		cout << "ջ��,�޷���ջ=_=" << endl;
		return ERROR;
	}
	e = *(--S.top);
	cout << "��ջ��Ԫ����" << e << endl;
	return OK;

}
Status enptystack(Sqstack& S)
{
	if (S.top == S.base)
	{
		cout << "ջ��" << endl;
		return OK;
	}
	else
		cout << "ջ��Ϊ��" << endl;
	return ERROR;
}
Selemtype gettop(Sqstack& S)
{
	if (enptystack(S))
	{
		cout << "ջ���޷���ȡԪ��" << endl;
		return ERROR;
	}
	else
		cout <<"��ȡ�ɹ�,ջ��Ԫ��Ϊ" << *(S.top - 1) << endl;
	return OK;
}
Status InitStack(Sqstack& S)
{
	S.base = new Selemtype[MAXSIZE];
	if (!S.base)
		exit(OVERFLOW);
	S.stacksize = MAXSIZE;
	S.top = S.base;
	return OK;
}
void Menu() {
	int n = 1;
	while (n) {
		cout << "------------------------" << endl;
		cout << "*  1.��ʼ����ջ        *" << endl;
		cout << "*  2.��ջ              *" << endl;
		cout << "*  3.��ջ              *" << endl;
		cout << "*  4.�ж�ջ�Ƿ�Ϊ��    *" << endl;
		cout << "*  5.��ջ              *" << endl;
		cout << "*  0.�˳�              *" << endl;
		cout << "------------------------" << endl;
		cout << "��ѡ��Ҫִ�еĲ���" << endl;
		n = input();
		switch (n)
		{
		case 1:InitStack(S) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 2:cout << "����Ԫ��:" << endl; push(S, input()) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 3:pop(S, 0) ? cout << "�����ɹ�!" << endl : cout << "����ʧ��!" << endl; break;
		case 4:enptystack(S); break;
		case 5:gettop(S); break;
		case 0:n = 0;
		default:cout << "����������ѡ��!" << endl;
		}
	}
}
int main()
{
	Menu();
}