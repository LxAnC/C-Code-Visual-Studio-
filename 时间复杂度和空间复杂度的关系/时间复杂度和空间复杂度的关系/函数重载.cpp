#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a + b;
}
float sum(float a, float b)
{
	return a + b;
}
int sum(int a, int b, int c)
{
	return a + b + c;
}
int main()
{
	float a = 1.232, b = 123.23;
	cout << sum(1, 2)<< endl;
	cout << sum(a, b)<<endl;
	cout << sum(12, 22, 33);
	return 0;
}