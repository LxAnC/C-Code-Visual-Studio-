#pragma once
#include"User.h"
#include"Student.h"
#include"studyhallseats.h"
#include<vector>
class Admin:public User
{
public:
	Admin();//Ĭ�Ϲ���
	Admin(string name, string pwd);;//�вι��� (ְ����ţ�����������)
	void showAllOrder();//�鿴����ԤԼ
	void validOrder();//���ԤԼ
	virtual void operMenu();//ѡ��˵�
	void addPerson();//����˺�
	void showPerson();//�鿴�˺�
	void showComputer();//�鿴ԤԼ��Ϣ
	void cleanFile();//���ԤԼ��¼
	int m_EmpId; //����Ա���
	//��ʼ������
	void initVector();
	//ѧ������
	vector<Student> vStu;
	bool checkRepeat(int id, int type);
	vector<StudyHall> vSeats;
};