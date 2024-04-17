#include<iostream>
#include<string>
using namespace std;
class StudentInfo{
public:
	void student();
	void show();
	void input();
private:
	string m_name;
	string m_id;
	string m_major;
};
class Grades:public StudentInfo{
public:
	void cin1();
	void sh();
	double getAverage();
	friend void Sort(Grades s []);
private:
	double c[6];
	double avg;
};
