#include<iostream>
using namespace std;
int main() {
	double a = 1;
	double bound = 1.3 * sqrt(a);
	//x,y变化步长
	double step = 0.05;
	for (double y = bound; y >= -bound; y -=step)
	{
		//内层逐点扫描
		for (double x = -bound; x <= bound; x += 0.5 * step)
		{
			double result = pow(pow(x, 2) + pow(y, 2) - a, 3) - pow(x, 2) * pow(y, 3);

			if (result <= 0)
				cout << '*';
			else
				cout << " ";
		}
		cout << endl;
	}
	cin.get();
}