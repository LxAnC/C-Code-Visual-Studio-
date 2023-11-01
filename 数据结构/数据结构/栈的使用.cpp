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
	//判断栈是否已满
	if (S.top - S.base == S.stacksize)
	{
		cout << "栈满,无法入栈=_=" << endl;
		return ERROR;
	}
	*S.top++ = x;
	//将值赋值到top并同时++操作移动top指针
		return OK;
}
Status pop(Sqstack& S,Selemtype e)
{
	if (S.top == S.base)
	{
		cout << "栈空,无法出栈=_=" << endl;
		return ERROR;
	}
	e = *(--S.top);
	cout << "出栈的元素是" << e << endl;
	return OK;

}
Status enptystack(Sqstack& S)
{
	if (S.top == S.base)
	{
		cout << "栈空" << endl;
		return OK;
	}
	else
		cout << "栈不为空" << endl;
	return ERROR;
}
Selemtype gettop(Sqstack& S)
{
	if (enptystack(S))
	{
		cout << "栈空无法读取元素" << endl;
		return ERROR;
	}
	else
		cout <<"读取成功,栈顶元素为" << *(S.top - 1) << endl;
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
		cout << "*  1.初始化空栈        *" << endl;
		cout << "*  2.入栈              *" << endl;
		cout << "*  3.出栈              *" << endl;
		cout << "*  4.判断栈是否为空    *" << endl;
		cout << "*  5.读栈              *" << endl;
		cout << "*  0.退出              *" << endl;
		cout << "------------------------" << endl;
		cout << "请选择要执行的操作" << endl;
		n = input();
		switch (n)
		{
		case 1:InitStack(S) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 2:cout << "输入元素:" << endl; push(S, input()) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 3:pop(S, 0) ? cout << "操作成功!" << endl : cout << "操作失败!" << endl; break;
		case 4:enptystack(S); break;
		case 5:gettop(S); break;
		case 0:n = 0;
		default:cout << "请重新输入选项!" << endl;
		}
	}
}
int main()
{
	Menu();
}