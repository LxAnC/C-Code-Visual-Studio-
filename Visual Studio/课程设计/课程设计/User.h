#pragma once
#include<iostream>
using namespace std;
//抽象类
class User
{
public:

	//操作菜单
	virtual void operMenu() = 0;//定义纯虚函数来制造模板

	string m_Name; //用户名
	string m_Pwd;  //密码
};