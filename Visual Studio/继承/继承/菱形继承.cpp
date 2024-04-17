#include<iostream>
using namespace std;
class animal {
public:
	int age;
};
class sheep :virtual public animal{
};
class tuo :virtual public animal {

};
class sheeptuo :public sheep, public tuo {

};
//那么羊驼有两个age说明资源浪费了
//这时候需用虚继承就可以解决;
//virtual放在public，意思就是共享数据了解决了菱形继承问题;
//共享一份数据
int main() {
	sheeptuo s;
	s.sheep::age = 20;
	s.tuo::age = 18;
	s.age = 38;
	cout << "羊：" << s.sheep::age << endl;
	cout<<"驼：" << s.tuo::age;
	cout << "羊驼：" << s.age;
}