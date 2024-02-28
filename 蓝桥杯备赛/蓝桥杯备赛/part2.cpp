#include<iostream>
using namespace std;
bool r;
int s = 0;

int main()
{int date1, date2,y1,y2,m1,m2,d1,d2,i;
	cin >> date1 >> date2;
	y1 = (int)(date1 / 10000);
	y2 = (int)(date2 / 10000);
	m1 = (int)(date1 / 100 % 100);
	m2 = (int)(date2 / 100 % 100);
	d1 = date1 % 100;
	d2 = date2 % 100;
	
	for (; y1 <= y2; y1++)
	{
		if (y1 % 4 == 0 && y1 % 100 != 0 || y1 % 400 == 0)
			r = 1;
		else
			r = 0;
		for (; y1 < y2 ? m1 <= 12 : m1 <= m2; m1++)
		{
			switch (m1)
			{
			case 1:case 3:case 5:case 7:case 8:case 10:case 12:
				for (; y1 == y2 && m1 == m2 ? d1 <= d2 : d1 <= 31; d1++)
					if (y1 / 1000 == d1 % 10 && y1 / 100 % 10 == d1 / 10 && y1 / 10 % 10 == m1 % 10 && y1 % 10 == m1 / 10)
						s++; break;
			case 2:for (; r == 1 ? y1 == y2 && m1 == m2 ? d1 <= d2 : d1 <= 29 : y1 == y2 && m1 == m2 ? d1 <= d2 : d1 <= 28; d1++)
				if (y1 / 1000 == d1 % 10 && y1 / 100 % 10 == d1 / 10 && y1 / 10 % 10 == m1 % 10 && y1 % 10 == m1 / 10)
					s++; break;
		case 4:case 6:case 9:case 11:
			for (; y1 == y2 && m1 == m2 ? d1 <= d2 : d1 <= 30; d1++)
				if (y1 / 1000 == d1 % 10 && y1 / 100 % 10 == d1 / 10 && y1 / 10 % 10 == m1 % 10 && y1 % 10 == m1 / 10)
					s++; break;
			}d1 = 1;
		}
		m1 = 1;
	}
	cout << s;
}