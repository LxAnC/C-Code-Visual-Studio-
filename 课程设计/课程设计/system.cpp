#include"system.h"
int Login()
{
	int i;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "       ******************************************************         " << endl;
	cout << "       **********************梦厅预约系统********************         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ***                   作者：LxAnC                  ***         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ***                 请选择你登录的方式             ***         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ***                 1.学生     2.管理员            ***         " << endl;
	cout << "       ***                                                ***         " << endl;
	cout << "       ******************************************************         " << endl;
	cout << "       ******************************************************         " << endl;
	cout << "                                                                      " << endl;
	cout << "                                                                      " << endl;
	cout << "请输入你的用户类型：" << endl;
	cin >> i;
	return i;
}
void Begin()
{
	Login();
	return;
}
int main()
{
	int UserSelect;
	while (1)
	{
		cout << "======================  欢迎来到重师梦厅预约系统  ====================="
			<< endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t -------------------------------\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          1.学    生           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          2.管 理 员           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t|          0.退    出           |\n";
		cout << "\t\t|                               |\n";
		cout << "\t\t -------------------------------\n";
		cout << "输入您的选择: ";
		cin >> UserSelect;
		switch (UserSelect)
		{
		case 1:
			break;
		case 2:
			break;
		case 0:
			cout << "欢迎下一次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择！" << endl;
			system("pause");
			system("cls");
		}
	}
	system("pause");
	return 0;
}