#include<iostream>

using namespace std;

class point

{

public:

	void poi(int px = 10, int py = 10)

	{
		x = px; y = py;
	}

	friend int getpx(point a);

	friend int getpy(point b);

private:

	int x, y;

};

int getpx(point a)

{
	return a.x;
}

int getpy(point a)

{
	return a.y;
}

int main()

{

	point p, q;

	p.poi(); q.poi(15, 15);

	cout << getpx(p);

	cout << getpy(p) << endl;

	cout << getpx(q);

	cout << getpy(q) << endl;

	return 0;

}

