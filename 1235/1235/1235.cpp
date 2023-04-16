/*名字：孟鑫良
学号：2022051614022
班级：高职（3+4）
日期：2023/3/13
*/
#include <iostream>
using namespace std;

int main() {
	int a, x = 0; //输入的数
	int w = 0;//位数
	int h = 0;//和
	cout << "输入任意一个整数" << endl;
	cin >> a;
	while (a > 0) {    //使用循环进行位数与和的叠加
		w++;      //每循环一次位数加一
		h += a % 10;  //对a取余10进行数位和的叠加
		x = x * 10 + a % 10; //计算逆序
		a /= 10;    //重点：以确保能进行下一位数的叠加，必须不断的/10
	}
	cout << "输出和：" << h << endl;
	cout << "输出位数：" << w << endl;
	cout << "输出逆序：" << x << endl;
	return 0;
}
