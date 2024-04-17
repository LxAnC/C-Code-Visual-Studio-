#include<iostream>
using namespace std;
class Date {
private:
	int year_;
	int month_;
	int day_;
public:
	void sDate();
	void sDate(int ,int ,int);
	void Nextday(int, int, int);
	void rn(int, int, int);
	void xj1(int, int);
	void xj2(int, int);
	void sc(int, int, int);
	int tomorrow();
};
void Date::sDate() {
	cin >> year_ >> month_ >> day_;
}
void Date::sDate(int year, int  month, int day) {
	year = year_;
	month = month_;
	day = day_;
	cout << year << month << day;
}
void Date::Nextday(int year, int month, int day) {
	
}
int main()
{
	Date d1;
	Date d2;
	d1.sDate();
	d1.sDate(year_,month_,day_);
	system("pause");
	return 0;
}