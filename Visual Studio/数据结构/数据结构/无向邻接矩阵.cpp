#include<iostream>
using namespace std;
#define MaxInt 32767//����ֵ
#define MVNum 100//��󶥵���
typedef char VerTexType;//���趥��������������ַ���
typedef int ArcType,Status;//����ߵ�Ȩֵ����Ϊ����
typedef struct
{
	VerTexType vexs[MVNum];//�����
	ArcType arcs[MVNum][MVNum];//�ڽӾ���
	int vexnum, arcnum;//ͼ�ĵ�ǰ�����ͱ���
}AMGraph;
AMGraph G;
int LocateVex(AMGraph G, char v)
{
	for (int i = 0; i < G.vexnum; i++)
		if (G.vexs[i] == v)
			return i;
}
Status CreateUDN(AMGraph G)
{
	int i, j,w;
	char v1, v2;
	cout << "�������ܵ������ܱ���" << endl;
	cin >> G.vexnum >> G.arcnum;//��������ͱ���
	cout << "��ʼ����" << endl;
	for (int i = 0; i < G.vexnum; i++)
		cin >> G.vexs[i];//���붥����
	for (i = 0; i < G.vexnum; i++)
		for (j = 0; j < G.vexnum; j++)
			G.arcs[i][j] = 0;//��ʼ���ڽӾ���
	for (int k = 0; k < G.arcnum; k++)
	{
		cout << "������ñ���������������" << endl;
		cin >> v1 >> v2 ;
		i = LocateVex(G, v1);//�ҵ������λ��
		j = LocateVex(G, v2);//�ҵ�������±�λ��
		G.arcs[i][j] = 1;//��Ϊ1
		G.arcs[j][i] = G.arcs[i][j];//�Գ�
}
	cout << "���������ڽӾ���......" << endl;
	for (i = 0; i < G.vexnum; i++)
	{
		for (j = 0; j < G.vexnum; j++)
			cout << G.arcs[i][j] << " ";
		cout << endl;
	}
	return 1;
}
int main()
{
	if (CreateUDN(G))
		cout << "�����ɹ�" << endl;
	else
		cout << "����ʧ��" << endl;
}