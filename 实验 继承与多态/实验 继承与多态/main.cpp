#include"student.h"
#include<iostream>
using namespace std;
int main() {
	Grades s[3];
	for (int i = 0; i < 3; i++)
	{
		s[i].student();
		s[i].cin1();
		s[i].getAverage();
		s[i].sort(s);
	}
	system("pause");
	return 0;
}