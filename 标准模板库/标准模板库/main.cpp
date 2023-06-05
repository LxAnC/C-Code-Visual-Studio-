#include"head.h"
template<class T>
T max(T a, T b) {
	if (a > b)
		return a;
	return b;
}
template<class T>
T min(T a, T b) {
	if (a < b)
		return a;
	return b;
}
int main() {
	int a = 2, b = 3;
	float x = 5.8, y = 9.99;
	cout<<"以下对函数模板的程序进行输出验证"<<endl;
	cout << "测试数为: " << x << " 和 " << y << endl;
	cout <<"最大值为:" << setw(4) << max(x,y) << endl;//float实型测试
	cout <<"最小值为:" << setw(4) << min(x,y) << endl;//float实型测试
	cout << "*****************************************" << endl;
	cout << "测试数为: " << a << " 和 " << b << endl;
	cout <<"最大值为:" <<setw(4)<< max(a,b) << endl;//int整型测试
	cout <<"最小值为:" << setw(4) << min(a,b) << endl;//整型min测试
	system("pause");
	return 0;
}