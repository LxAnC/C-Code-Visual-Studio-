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
	cout<<'*'*10<<"1.����ѧ����Ϣ"<< '*' * 10;
}
Student::Student()
{
	num = this->num;
	name = this->name;
}
Student::~Student() {
}
void Student::setdate() {
	
	cout << "������ѧ����ѧ��" << endl;
	cin>>this->num;
	cout << "������ѧ��������" << endl;
	cin >> this->name;
	cout << "������ѧ�������ſ�Ŀ�ĳɼ�";
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