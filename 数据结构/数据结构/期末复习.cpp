#include<iostream>
using namespace std;
int main()
{
	//初始化一维数组以及二维数组的注意事项和格式
	int* p = new int[5];
	//初始化时同时赋初值
	int* p2 = new int(3);
	cout << *p2 << endl;
	//cout << "一维数组的创建" << endl;
	int(*p1)[3] = new int[1][3];
	//cout << "要注意初始化的时候要与列数一致" << endl;
	cout << sizeof(p);


}