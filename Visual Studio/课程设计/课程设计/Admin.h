#pragma once
#include"User.h"
#include"Student.h"
#include"studyhallseats.h"
#include<vector>
class Admin:public User
{
public:
	Admin();//默认构造
	Admin(string name, string pwd);;//有参构造 (职工编号，姓名，密码)
	void showAllOrder();//查看所有预约
	void validOrder();//审核预约
	virtual void operMenu();//选择菜单
	void addPerson();//添加账号
	void showPerson();//查看账号
	void showComputer();//查看预约信息
	void cleanFile();//清空预约记录
	int m_EmpId; //管理员编号
	//初始化容器
	void initVector();
	//学生容器
	vector<Student> vStu;
	bool checkRepeat(int id, int type);
	vector<StudyHall> vSeats;
};