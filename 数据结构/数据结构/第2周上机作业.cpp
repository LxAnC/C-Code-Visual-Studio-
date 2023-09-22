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
	cout << "请选择进行操作的编号----" << endl;
	cout << "---------------------" << endl;
	cout << "1-初始化空表" << endl;
	cout << "2-初始化指定长度的表" << endl;
	cout << "3-输出表" << endl;
	cout << "4-插入" << endl;
	cout << "5-删除" << endl;
	cout << "6-定位" << endl;
	cout << "7-取元素" << endl;
	cout << "0-退出" << endl;
	cout << "---------------------" << endl;
}

Status InsertElem(SqList &L)
{
	int i, e;
	cout << "请输入序号和数字" << endl;
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
	cout << "以下是当前表的所有信息" << endl;
	cout << "--------------------" << endl;
	for (int i = 0; i < length; i++)
		cout << L.elem[i] << " ";
	cout << "长度为" << length << endl;
}
Status InitElemForm(SqList& L)
{
	cout << "请输入长度" << endl;
	int len=Input();
	L.elem = new ElemType[len];
	cout << "请输入" << len << "个元素输入到新表" << endl;
	for (int i = 0; i < len; i++)
		cin >> L.elem[i];
	L.length = len;
	return OK;
}
Status InitForm(SqList& L)
{
	//初始化一个空的顺序表L
	L.elem = new ElemType[MAXSIZE];
	if (!L.elem)
		exit(OVERFLOW);
	L.length = 0;
	return OK;
}
Status DeleteElem(SqList& L)
{
	int num;
	cout << "请输入要删除第几个元素" << endl;
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
	cout << "请输入想取出值的序号" << endl;
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
		cout << "输入对应操作的选项号:" << endl;
		cin >> x;
		switch (x)
		{
		case 1:InitForm(L) ? cout << "初始化成功" : cout << "初始化失败!";; break;
		case 2:InitElemForm(L) ? cout << "初始化成功" << endl : cout << "初始化失败!"<<endl;; break;
		case 3:OutPutForm(L,L.length); break;
		case 4:InsertElem(L) ? cout << "插入成功" << endl : cout << "插入失败" << endl; ; break;
		case 5:DeleteElem(L) ? cout << "删除成功" << endl : cout << "删除失败" << endl; ; break;
		case 6:LocalateElem(L) ? cout << "查找成功" << endl : cout << "删除失败" << endl;; break;
		case 7:GetElem(L); break;
		case 0:cout << "谢谢您的使用" << endl; return;
		default: {
			cout << "请重新输入:" << endl;
		}
		}
	}
}
int main()
{
	Menu();
	Controls();
}

