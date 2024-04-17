#include<iostream>
using namespace std;
#define MAXSIZE 100
#define OK 1
#define ERROR 0
typedef int Status;
typedef int ElemType;
typedef struct
	{
		ElemType* elem;
		int length;
	}SqList;
SqList L;
int Input()
{
	int x;
	cin >> x;
	return x;
}
void Menu() {
	cout << "��ѡ����в����ı��----" << endl;
	cout << "---------------------" << endl;
	cout << "1-��ʼ���ձ�" << endl;
	cout << "2-��ʼ��ָ�����ȵı�" << endl;
	cout << "3-�����" << endl;
	cout << "4-����" << endl;
	cout << "5-ɾ��" << endl;
	cout << "6-��λ" << endl;
	cout << "7-ȡԪ��" << endl;
	cout << "0-�˳�" << endl;
	cout << "---------------------" << endl;
}

Status InsertElem(SqList &L)
{
	int i, e;
	cout << "��������ź�����" << endl;
	i = Input();
	e = Input();
	if ((i < 1) || (i > L.length + 1))
		return ERROR;
	for (int j = L.length - 1; j >= i - 1; j--)
		L.elem[j + 1] = L.elem[j];
	L.elem[i - 1] = e;
	++L.length;
	return OK;
}
void OutPutForm(SqList& L,int length)
{
	cout << "�����ǵ�ǰ���������Ϣ" << endl;
	cout << "--------------------" << endl;
	for (int i = 0; i < length; i++)
		cout << L.elem[i] << " ";
	cout << "����Ϊ" << length << endl;
}
Status InitElemForm(SqList& L)
{
	cout << "�����볤��" << endl;
	int len=Input();
	L.elem = new ElemType[len];
	cout << "������" << len << "��Ԫ�����뵽�±�" << endl;
	for (int i = 0; i < len; i++)
		cin >> L.elem[i];
	L.length = len;
	return OK;
}
Status InitForm(SqList& L)
{
	//��ʼ��һ���յ�˳���L
	L.elem = new ElemType[MAXSIZE];
	if (!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	return OK;
}
Status DeleteElem(SqList& L)
{
	int num;
	cout << "������Ҫɾ���ڼ���Ԫ��" << endl;
	cin >> num;
	if (num<1 || num>L.length)
		return ERROR;
	for (int j = num; j <= L.length - 1; j++)
		L.elem[j - 1] = L.elem[j];
	--L.length;
	return OK;
}

Status LocalateElem(SqList &L)
{
	int x = Input();
	for (int j = 0; j < L.length; j++)
		if (x == L.elem[j])
			return j + 1;
	return ERROR;
}
int Inputmk()
{
	int x;
	cout << "��������ȡ��ֵ�����" << endl;
	cin >> x;
	return x;
}
Status GetElem(SqList& L)
{
	int x = Inputmk();
	return L.elem[x];
}
void Controls()
{
	while (1)
	{
		int x;
		cout << "�����Ӧ������ѡ���:" << endl;
		cin >> x;
		switch (x)
		{
		case 1:InitForm(L) ? cout << "��ʼ���ɹ�" : cout << "��ʼ��ʧ��!";; break;
		case 2:InitElemForm(L) ? cout << "��ʼ���ɹ�" << endl : cout << "��ʼ��ʧ��!"<<endl;; break;
		case 3:OutPutForm(L,L.length); break;
		case 4:InsertElem(L) ? cout << "����ɹ�" << endl : cout << "����ʧ��" << endl; ; break;
		case 5:DeleteElem(L) ? cout << "ɾ���ɹ�" << endl : cout << "ɾ��ʧ��" << endl; ; break;
		case 6:LocalateElem(L) ? cout << "���ҳɹ�" << endl : cout << "ɾ��ʧ��" << endl;; break;
		case 7:GetElem(L); break;
		case 0:cout << "лл����ʹ��" << endl; return;
		default: {
			cout << "����������:" << endl;
		}
		}
	}
}
int main()
{
	Menu();
	Controls();
}

