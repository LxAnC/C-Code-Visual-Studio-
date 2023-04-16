/*
程序名：各类型的字节长度和位长.cpp
程序功能：输出各类型的字节长度和位长
作者：陆宣臣
日期：2023.2.27
*/
#include <iostream>  //预处理命令
using namespace std; //定义命名空间
int main()
{
	cout << "long int:" << sizeof(long) << " byte " << sizeof(long) * 8 << " bits " << endl;  //算长整型
	cout <<"     int:" << sizeof(int)<<" byte "<< sizeof(int) * 8 << " bits " << endl;        //算整型
	cout << "    char:" << sizeof(char) << " byte " << sizeof(char) * 8 << " bits " << endl;  //算字符串
	cout << "    bool:" << sizeof(bool) << " byte " << sizeof(bool) * 8 << " bits " << endl;  //算布尔类型的
	return 0;   //结束
}
