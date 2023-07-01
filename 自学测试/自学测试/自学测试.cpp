#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string num;
 string name;
	double grade[3];
	double totalscore;
public:
	Student();
	Student( string num,  string sname, double* a[]);
	void input();
	void display();
	double count();
	friend int findmax(Student a[], int n);
};
int main() {
	int m[3] = { 60,70,80 };
	Student s("101", "wang", m);
	s.display();
	Student a[3];
	int i;
	for (i = 0; i < 3; i++)
		a[i].input();
	for (i = 0; i < 3; i++)
		a[i].display();
	int mk;
	mk = findmax(a, 3);
	cout << "成绩最高的同学的信息：" << mk + 1 << endl;
	a[mk].display();
	return 0;
}
Student::Student() {
	;
}
Student::Student(string snum, string sname, double* a[])
{
	num = snum;
	name = sname;
	for (int i = 0; i < 3; i++)
	{
		grade[i] = *a[i];
	}
	return;
}
void Student::input()
{
	cout << "请输入你的学号,姓名,成绩" << endl;
	cin >> num;
	cin >> name;
	cout << "输入高数，英语，C语言成绩" << endl;
	cin >> grade[0];
	cin >> grade[1];
	cin >> grade[2];
	return;
}
void Student::display()
{
	cout << "\t学号是:" << "\t姓名" << "\t高数" << "\t英语" << "\tC语言" <<"\t总分"<< endl;
	cout << "\t   " << num;
	cout << "\t   " << name;
	cout << "\t   " << grade[0];
	cout << "\t   " << grade[1];
	cout << "\t   " << grade[2];
	cout << "\t   " << this->count();
	cout << endl;
	return;
}
double Student::count()
{
	return grade[0] + grade[1] + grade[2];
}
int findmax(Student a[], int n)
{
	int max = a[0].count();
	int p = 0;
	for (int i = 1; i < 2; i++)
		if (max < a[i].count())
		{
			max = a[i].count();
			p = i;
		}
	return p;
}
