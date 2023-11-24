#include<iostream>
using namespace std;
#define MaxInt 32767
#define OK 1
#define MVNum 10//最大顶点数
typedef char VerTexType;
typedef int ArcType, Status;
typedef int OtherInfo;


typedef struct ArcNode
{
	char adjvex;//该边指向的顶点的位置
	struct ArcNode* nextarc;//指向下一条边的指针
	OtherInfo info;//和边相关的信息
}ArcNode;//边结点
typedef struct VNode {
	VerTexType data;
	ArcNode* firstarc;//指向第一条依附该顶点的边的指针
}VNode,AdjList[MVNum];//顶点信息
typedef struct
{
	AdjList vertices;//表的顶点值
	int vexnum, arcnum;//当前表的顶点数和边数
}ALGraph ;//邻接表


ALGraph G;
//邻接表的存储表示
int LocateVex(ALGraph G, char v)
{
	for (int i = 0; i < G.vexnum; i++)
		if (G.vertices[i].data == v)
			return i;
}
//创建邻接表的函数创建
Status CreateUDG(ALGraph &G)
{
	int i, j,k;
	char v1, v2;
	cout << "请输入该无向图的总顶点数和总边数" << endl;
	cin >> G.vexnum >> G.arcnum;//首先输入总的顶点数和边数
	for (i = 0; i < G.vexnum; i++)
	{
		cout << "请输入第" << i + 1 << "个顶点值" << endl;
		cin >> G.vertices[i].data;//将顶点标识输入到data中保存
		cout << "输入成功" << endl;
		G.vertices[i].firstarc = NULL;//将表头结点置空
	}
	for (k = 0; k < G.arcnum; k++)
	{
		cout << "请输入一条边依附的两个顶点" << endl;
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
		cout << "顶点:";
		cout << G.vertices[i].data;
		ArcNode* p3 = new ArcNode;
		p3 = G.vertices[i].firstarc;
		cout << "      和该顶点连通的顶点有:     ";
		while (p3 != NULL)
		{
			
			cout << p3->adjvex<<"   ";
			p3 = p3->nextarc;
		}
		cout << endl;
	}
}
int main() {
	cout << "正在创建无向图的邻接表" << endl;
	if (CreateUDG(G))
		cout << "创建成功" << endl;
	else
		cout << "创建失败" << endl;
	PrintGraph(G);
}