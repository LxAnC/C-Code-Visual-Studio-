#include<iostream>
using namespace std;
class person {
	//�����������ѣ�����������Է������������г�Ա
	friend ostream& operator<<(ostream& c, person& p);
public:
	person() {

	}
	person(int x, int y) {
		a = x;
		b = y;
	}
	//ͨ����������Ϊ˽�У���ô
	//����������Ԫ
	//friend
private:
	int a;
	int b;
};
//���ó�Ա�������� ��������� �޷���������
//ͨ���������ó�Ա����������<<�����
//��Ϊ�޷��ж�cout�����
//����p.operator<<(p);

//����ȫ�ֺ���������
//���� operator()
//���ñ�����������
ostream & operator<<(ostream &c, person &p)
{
	c << p.a << " " << p.b ;
	return c;
}
int main()
{
	person p1(1,2), p2(5,8);
	cout << p1<<endl;
	cout << p2;
}