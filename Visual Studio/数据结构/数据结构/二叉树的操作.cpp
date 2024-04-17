#include<iostream>
using namespace std;
#define Error 0
#define OK 1
typedef int Status ;
typedef int Elemtype;
typedef struct BitNode {
	Elemtype data;
	struct BitNode* lch, * rch;
}*Bitree, BitNode;
Bitree bt;
int width, height;
int input()
{
	int x;
	cin >> x;
	return x;
}
void suc() {
	cout << "执行成功" << endl;
}
void fai() {
	cout << "执行失败" << endl;
}
//算深度
int DeepTree(Bitree &bt)
{
	if (!bt)
	{
		return 0;
	}
	return DeepTree(bt->lch) > DeepTree(bt->rch) ? DeepTree(bt->lch) + 1 : DeepTree(bt->rch) + 1;
	//如果该节点的左子树深度大于右子树则将左子树的深度加一返回,这个返回值便是以该节点做根节点的树的深度,右子树深度大时则相反
}
void fillArray(Bitree& bt, char* a, int i, int j)
{
	
	if (bt) //如果该位置有节点
	{
		int ti=0, tj=0;
		*(a + (i * width) + j) = bt->data; //向数组该点填入字符
		if (bt->lch ) //有左右孩子给对应的连接线,左右孩子的值在下一层递归赋
		{
			//将该点与其左孩子之间的连线全部填上'/'
			for (ti = i + 1, tj = j - 1; tj > j - (height - i + 1) / 2; tj--)
			{
				*(a + ((ti)*width) + tj) = -1;
				ti++;
			}
		}
		if (bt->rch )
		{
			for (ti = i + 1, tj = j + 1; tj < j + (height - i + 1) / 2; tj++)
			{
				*(a + ((ti)*width) + tj) = 1;
				ti++;
			}
		}
		//经过循环,ti恰好指到其孩子所在的层
		fillArray(bt->lch , a, ti, j - (height - i + 1) / 2);
		fillArray(bt->rch , a, ti, j + (height - i + 1) / 2);
	}
}
void printBiTree(Bitree& bt)
{
	int i, j;
	int n = DeepTree(bt); //计算出深度n
	//在计算机中数据以二进制形式存储,所以一个数据左移1位就相当于乘以2的1次方
	width = (2 << n) - 3;  // 2^(n+1)-3
	height = (2 << (n - 1)) - 1; // 2^n-1
	char* a = (char*)malloc(sizeof(char) * (width * height)); // 申请空间

	// 空间初始化为0
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(a + (i * width) + j) = 0;
		}
	}
	//调用之前定义好的函数,填充打印数组
	fillArray(bt, a, 0, (width - 1) / 2);
	//根据打印数组的内容来实现打印
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (*(a + (i * width) + j) == -1)
			{
				printf("/");
			}
			else if (*(a + (i * width) + j) == 1)
			{
				printf("\\");
			}
			else if (*(a + (i * width) + j) == 0)
			{
				printf(" ");
			}
			else
			{
				printf("%c", *(a + (i * width) + j));
			}
		}
		printf("\n");
	}
}
//创建二叉链表
/*Status InitBT(Bitree& bt) {
	char ch;
	cin >> ch;
	if (ch == '#')
		bt = NULL;
	else
	{
		bt = new BitNode;
		bt->data = ch;
		InitBT(bt->lch);
		InitBT(bt->rch);
		return OK;
	}
}
*/
//创建树,将输入的字符串以先序的形式存入二叉树
void CreateTree(Bitree& bt)
{
	char ch;
	cin >> ch;
	if (ch == '\n')
	{
		return;
	}
	if (ch == '#')
	{
		bt = NULL;
		return;
	}
	bt = (Bitree)malloc(sizeof(BitNode));
	bt->data = ch;
	CreateTree(bt->lch );
	CreateTree(bt->rch );
}
//先序遍历
Status PreOrderTraversal(Bitree &bt) {
	if (bt) {
		cout << (char)bt->data<< " ";
		PreOrderTraversal(bt->lch);
		PreOrderTraversal(bt->rch);
		return OK;
	}
}
//中序遍历
Status InOrderTraversal(Bitree& bt) {
	if (bt) {
		InOrderTraversal(bt->lch);
		cout << (char)bt->data << " ";
		InOrderTraversal(bt->rch);
		return OK;
	}
}
//后序遍历
Status PostOrderTraversal(Bitree& bt) {
	if (bt) {
		PostOrderTraversal(bt->lch);
		PostOrderTraversal(bt->rch);
		cout << (char)bt->data << " ";
		return OK;
	}
}
//计算叶子结点的个数
int LeafCount(Bitree& bt) {
	if (bt == NULL)
		return 0;
	else if (LeafCount(bt->lch) + LeafCount(bt->rch) == 0)
		return 1;
}
//计算度为1结点的个数
int one = 0;
void  NodeCount1(Bitree &bt) {
	if (bt) {
		if (bt->lch == NULL && bt->rch != NULL || bt->lch != NULL && bt->rch == NULL)
			one++;
		NodeCount1(bt->lch);
		NodeCount1(bt->rch);
	}
}
//计算度为2结点的个数
int two = 0;
void NodeCount2(Bitree& bt) {
	if (bt) {
		if (bt->lch != NULL && bt->rch != NULL )
			two++;
		NodeCount2(bt->lch);
		NodeCount2(bt->rch);
	}
}
Status SwapBt(Bitree& bt) {
	if (bt == NULL)
		return 0;
	else if (LeafCount(bt->lch) + LeafCount(bt->rch) == 2)
	{
		swap(bt->lch, bt->rch);
	}
}
void menu() {
	int n;
	while (1) {
		cout << "------------------------" << endl;
		cout << "|  1.创建二叉链表            |" << endl;
		cout << "|  2.先序遍历                    |" << endl;
		cout << "|  3.中序遍历                    |" << endl;
		cout << "|  4.后序遍历                     |" << endl;
		cout << "|  5.统计叶结点个数           |" << endl;
		cout << "|  6.统计度为1的结点个数  |" << endl;
		cout << "|  7.统计度为2的结点个数  |" << endl;
		cout << "|  8.交换左右孩子结点       |" << endl;
		cout << "|  0.退出                           |" << endl;
		cout << "------------------------" << endl;
		cout << "尊敬的用户您好,请选择要执行的操作" << endl;
		switch (n = input()) {
		case 1:cout << "正在创建" << endl; CreateTree(bt); printBiTree(bt); break;
		case 2:cout << "正在进行先序遍历" << endl; PreOrderTraversal(bt) ? suc() : fai(); break;
		case 3:cout << "正在进行中序遍历" << endl; InOrderTraversal(bt) ? suc() : fai(); break;
		case 4:cout << "正在进行后序遍历" << endl; PostOrderTraversal(bt) ? suc() : fai(); break;
		case 5:cout << "统计叶结点的个数" << endl; cout << "叶子结点个数为" << LeafCount(bt) << endl;break;
		case 6:cout << "正在统计度为1的结点个数" << endl; NodeCount1(bt); cout << "度为1结点个数为" << one << endl; break;
		case 7:cout << "正在统计度为2的结点个数" << endl; NodeCount2(bt); cout << "度为2结点个数为" << two << endl; break;
		case 8:cout << "正在交换左右孩子结点" << endl;  SwapBt(bt) ? suc() : fai(); break;
		case 0:cout << "see you" << endl; break;
		}
		if (n == 0)
			break;
	}
}
int main()
{
	menu();
}