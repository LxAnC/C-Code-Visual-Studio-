#include<iostream>
using namespace std;
#define MaxInt 32767
#define OK 1
#define MVNum 10//��󶥵���
typedef char VerTexType;
typedef int ArcType, Status;
typedef int OtherInfo;


typedef struct ArcNode
{
	char adjvex;//�ñ�ָ��Ķ����λ��
	struct ArcNode* nextarc;//ָ����һ���ߵ�ָ��
	OtherInfo info;//�ͱ���ص���Ϣ
}ArcNode;//�߽��
typedef struct VNode {
	VerTexType data;
	ArcNode* firstarc;//ָ���һ�������ö���ıߵ�ָ��
}VNode,AdjList[MVNum];//������Ϣ
typedef struct
{
	AdjList vertices;//��Ķ���ֵ
	int vexnum, arcnum;//��ǰ��Ķ������ͱ���
}ALGraph ;//�ڽӱ�


ALGraph G;
//�ڽӱ�Ĵ洢��ʾ
int LocateVex(ALGraph G, char v)
{
	for (int i = 0; i < G.vexnum; i++)
		if (G.vertices[i].data == v)
			return i;
}
//�����ڽӱ�ĺ�������
Status CreateUDG(ALGraph &G)
{
	int i, j,k;
	char v1, v2;
	cout << "�����������ͼ���ܶ��������ܱ���" << endl;
	cin >> G.vexnum >> G.arcnum;//���������ܵĶ������ͱ���
	for (i = 0; i < G.vexnum; i++)
	{
		cout << "�������" << i + 1 << "������ֵ" << endl;
		cin >> G.vertices[i].data;//�������ʶ���뵽data�б���
		cout << "����ɹ�" << endl;
		G.vertices[i].firstarc = NULL;//����ͷ����ÿ�
	}
	for (k = 0; k < G.arcnum; k++)
	{
		cout << "������һ������������������" << endl;
		cin >> v1 >> v2;
		i = LocateVex(G, v1);
		j = LocateVex(G, v2);
		ArcNode* p1 = new ArcNode;
		p1->adjvex = v2;
		p1->nextarc = G.vertices[i].firstarc;
		G.vertices[i].firstarc = p1;
		ArcNode* p2 = new ArcNode;
		p2->adjvex = v1;
		p2->nextarc = G.vertices[j].firstarc;
		G.vertices[j].firstarc = p2;
	}
	return OK;
}
void PrintGraph(ALGraph& G) {
	int i, j;
	for (i = 0; i < G.vexnum; i++)
	{
		cout << "����:";
		cout << G.vertices[i].data;
		ArcNode* p3 = new ArcNode;
		p3 = G.vertices[i].firstarc;
		cout << "      �͸ö�����ͨ�Ķ�����:     ";
		while (p3 != NULL)
		{
			
			cout << p3->adjvex<<"   ";
			p3 = p3->nextarc;
		}
		cout << endl;
	}
}
int main() {
	cout << "���ڴ�������ͼ���ڽӱ�" << endl;
	if (CreateUDG(G))
		cout << "�����ɹ�" << endl;
	else
		cout << "����ʧ��" << endl;
	PrintGraph(G);
}