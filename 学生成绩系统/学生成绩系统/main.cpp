#include<iostream>
#include<string>
#define M 100
using namespace std;
class Student {
public:

	Student();
	~Student();
	void setdate();
	friend void menu();
	static int count;
private:
	string num;
	string name;
	int score[3];
};
int Student::count = 0;
void menu() {
	cout<<'*'*10<<"1.输入学生信息"<< '*' * 10;
}
Student::Student()
{
	num = this->num;
	name = this->name;
}
Student::~Student() {
}
void Student::setdate() {
	
	cout << "请输入学生的学号" << endl;
	cin>>this->num;
	cout << "请输入学生的姓名" << endl;
	cin >> this->name;
	cout << "请输入学生的三门科目的成绩";
	cin >> this->score[0] >> this->score[1] >> this->score[2];
	count++;
	cout << this->name << endl;
	cout << count << endl;
}
int main()
{
	Student s[M];
	return 0;
}