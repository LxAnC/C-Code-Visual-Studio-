#include"lxc.h"
class AbstractDrinking
{
public:
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSomething() = 0;
	//������Ʒ
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};
class Coffee :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�����Ǻ�ţ��" << endl;
	}

};
class Tea :public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "���Ȫˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void PourInCup()
	{
		cout << "���뱭��" << endl;
	}
	virtual void PutSomething()
	{
		cout << "�������" << endl;
	}

};
void doWork(AbstractDrinking * abs)
{
	abs->makeDrink();
	delete abs;//
}
void test01()
{
	//��������
	doWork(new Coffee);
	//������Ҷ
	doWork(new Tea);
}
int main()
{
	test01();
	system("pause");
	return 0;
}