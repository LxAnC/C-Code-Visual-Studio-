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
//��ô����������age˵����Դ�˷���
//��ʱ��������̳оͿ��Խ��;
//virtual����public����˼���ǹ��������˽�������μ̳�����;
//����һ������
int main() {
	sheeptuo s;
	s.sheep::age = 20;
	s.tuo::age = 18;
	s.age = 38;
	cout << "��" << s.sheep::age << endl;
	cout<<"�գ�" << s.tuo::age;
	cout << "���գ�" << s.age;
}