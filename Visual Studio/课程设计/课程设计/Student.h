#pragma once
#include"User.h"
#include<vector>
#include"studyhallseats.h"
class Student :public User
{
public:
	//Ĭ�Ϲ���
	Student();
	//�вι���(ѧ�š�����������)
	Student(int id, string name, string pwd);
	//�˵�����
	virtual void operMenu();
	//����ԤԼ
	void applyOrder();
	//�鿴�ҵ�ԤԼ
	void showMyOrder();
	//�鿴����ԤԼ
	void showAllOrder();
	//ȡ��ԤԼ
	void cancelOrder();
	//ѧ��ѧ��
	int m_Id;
	vector<StudyHall> vDes;
};