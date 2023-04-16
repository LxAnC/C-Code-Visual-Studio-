/*
定义运行了1次
i=0执行了1次
i<10执行了10次
i++执行了10次
cout执行了1次
*/
#include<iostream>
using namespace std;
int main()
{
	int i, j, k=0;
	for (i = 0; i < 10; i++)
		k++;
	cout << "程序执行了" << k << "次" << endl;
}