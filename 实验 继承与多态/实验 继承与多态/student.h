#include<iostream>
using namespace std;
class StudentInfo{
public:
	StudentInfo();
	~StudentInfo();
	friend double Grades::show();
private:
	string name;
	string id;
	string sname;
};
class Grades:public StudentInfo{
public:
	Grades();
	~Grades();
	void show();
	double getAverage(double);
	double Sort();
private:
	double s1;
	double s2;
	double s3;
	double s4;
	double s5;
	double s6;
	double avg;
};