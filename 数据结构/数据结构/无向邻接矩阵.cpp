#include<iostream>
using namespace std;
#define MaxInt 32767//极大值
#define MVNum 100//最大顶点数
typedef char VerTexType;//假设顶点的数据类型是字符型
typedef int ArcType,Status;//假设边的权值类型为整型
typedef struct
{
	VerTexType vexs[MVNum];//顶点表
	ArcType arcs[MVNum][MVNum];//邻接矩阵
	int vexnum, arcnum;//图的当前点数和边数
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
	cout << "请输入总点数和总边数" << endl;
	cin >> G.vexnum >> G.arcnum;//输入点数和边数
	cout << "开始构造" << endl;
	for (int i = 0; i < G.vexnum; i++)
		cin >> G.vexs[i];//输入顶点编号
	for (i = 0; i < G.vexnum; i++)
		for (j = 0; j < G.vexnum; j++)
			G.arcs[i][j] = 0;//初始化邻接矩阵
	for (int k = 0; k < G.arcnum; k++)
	{
		cout << "请输入该边依附的两个顶点" << endl;
		cin >> v1 >> v2 ;
		i = LocateVex(G, v1);//找到顶点的位置
		j = LocateVex(G, v2);//找到顶点的下标位置
		G.arcs[i][j] = 1;//置为1
		G.arcs[j][i] = G.arcs[i][j];//对称
}
	cout << "正在生成邻接矩阵......" << endl;
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
		cout << "创建成功" << endl;
	else
		cout << "创建失败" << endl;
}