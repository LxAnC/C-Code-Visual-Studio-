#include"Admin.h"
#include"ReserveFile.h"
#include"globalFile.h"
#include<fstream>��
#include<algorithm>
//Ĭ�Ϲ���
Admin::Admin()
{
}
//�вι���
Admin::Admin(string name, string pwd)
{
	this->m_Name = name;
	this->m_Pwd = pwd;
	//��ʼ������
	this->initVector();
	//��ȡ������Ϣ
	ifstream ifs;

	ifs.open(STUDYHALL_FILE, ios::in);

	StudyHall c;
	while (ifs >> c.m_DesId && ifs >> c.m_MaxNum)
	{
		vSeats.push_back(c);
	}
	cout << "��ǰ������λ����Ϊ�� " << vSeats.size() << endl;

	ifs.close();
}

//ѡ��˵�
void Admin::operMenu()
{
	cout << "��ӭ����Ա��" << this->m_Name << "��¼��" << endl;
	cout << "\t\t ---------------------------------\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          1.����˺�            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          2.�鿴�˺�            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          3.�鿴����            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          4.���ԤԼ            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          5.���ԤԼ            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t|          0.ע����¼            |\n";
	cout << "\t\t|                                |\n";
	cout << "\t\t ---------------------------------\n";
	cout << "��ѡ�����Ĳ����� " << endl;
}

//����˺�  
void Admin::addPerson()
{
	string errorTip="ѧ���ظ�����������"; //�ظ�������ʾ
	string fileName=STUDENT_FILE;
	ofstream ofs;
	ofs.open(fileName, ios::out | ios::app);
	int sid;
	string name;
	string pwd;
	cout << "������ѧ����ѧ��" << endl;
	while (true)
	{
		cin >> sid;

		bool ret = this->checkRepeat(sid, 1);

		if (ret) //���ظ�
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}
	cout << "������������ " << endl;
	cin >> name;
	cout << "���������룺 " << endl;
	cin >> pwd;
	ofs << sid << " " << name << " " << pwd << " " << endl;
	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
	ofs.close();
	this->initVector();//��ֹ�¼�����˺ſ����ظ�
}
//ѧ����Ϣ���
void printStudent(Student& s)
{
	cout << "ѧ�ţ� " << s.m_Id << " ������ " << s.m_Name << " ���룺" << s.m_Pwd << endl;
}
//�鿴�˺�
void Admin::showPerson()
{
		cout << "����ѧ����Ϣ���£� " << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	system("pause");
	system("cls");
}

//�鿴endl��Ϣ
void Admin::showComputer()
{
	cout << "������Ϣ���£� " << endl;
	for (vector<StudyHall>::iterator it = vSeats.begin(); it != vSeats.end(); it++)
	{
		cout << "������ţ� " << it->m_DesId << " ������������� " << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}

//���ԤԼ��¼
void Admin::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "��ճɹ���" << endl;
	system("pause");
	system("cls");
}

//�鿴����ԤԼ
void Admin::showAllOrder()
{
}

//���ԤԼ
void Admin::validOrder()
{
	ReserveFile of;
	if (of.m_Size == 0)
	{
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����˵�ԤԼ��¼���£�" << endl;

	vector<int>v;
	int index = 0;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["status"] == "1")
		{
			v.push_back(i);
			cout << ++index << "�� ";
			cout << "ԤԼ���ڣ� ��" << of.m_orderData[i]["date"];
			cout << " ʱ�Σ�" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
			cout << " ������" << of.m_orderData[i]["roomId"];
			string status = " ״̬�� ";  // 0ȡ����ԤԼ   1 �����   2 ��ԤԼ  -1 ԤԼʧ��
			if (of.m_orderData[i]["status"] == "1")
			{
				status += "�����";
			}
			cout << status << endl;
		}
	}
	cout << "��������˵�ԤԼ��¼,0������" << endl;
	int select = 0;
	int ret = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;
			}
			else
			{
				cout << "��������˽��" << endl;
				cout << "1��ͨ��" << endl;
				cout << "2����ͨ��" << endl;
				cin >> ret;

				if (ret == 1)
				{
					of.m_orderData[v[select - 1]]["status"] = "2";
				}
				else
				{
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();
				cout << "�����ϣ�" << endl;
				break;
			}
		}
		cout << "������������������" << endl;
	}

	system("pause");
	system("cls");
}
void Admin::initVector()
{
	//��ȡѧ���ļ�����Ϣ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}

	vStu.clear();

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		vStu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ�� " << vStu.size() << endl;
	ifs.close(); //ѧ����ʼ��
}
bool Admin::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_Id)
			{
				return true;
			}
		}
	}
	return false;
}