#pragma once
#include<iostream>
using namespace std;
//������
class User
{
public:

	//�����˵�
	virtual void operMenu() = 0;//���崿�麯��������ģ��

	string m_Name; //�û���
	string m_Pwd;  //����
};