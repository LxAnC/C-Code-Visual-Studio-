#include<iostream>
#include<fstream>
using namespace std;
class Student
{
public:
	void login();//登录界面
	void ReserveRoom();//预约房间

private:
	char m_Sid[64];//学号
	char m_PassWord[64];//密码
	bool m_isreserve = 0;//是否已有预约
};
class Admin
{
public:
	void login();//登录界面
	void SetPassword();//重设密码
private:
	char m_Name[64];
	char m_PassWord[64];
	int Room[1024];
};