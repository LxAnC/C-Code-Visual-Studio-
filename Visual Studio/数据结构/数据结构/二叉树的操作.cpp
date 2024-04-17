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
	cout << "ִ�гɹ�" << endl;
}
void fai() {
	cout << "ִ��ʧ��" << endl;
}
//�����
int DeepTree(Bitree &bt)
{
	if (!bt)
	{
		return 0;
	}
	return DeepTree(bt->lch) > DeepTree(bt->rch) ? DeepTree(bt->lch) + 1 : DeepTree(bt->rch) + 1;
	//����ýڵ����������ȴ���������������������ȼ�һ����,�������ֵ�����Ըýڵ������ڵ���������,��������ȴ�ʱ���෴
}
void fillArray(Bitree& bt, char* a, int i, int j)
{
	
	if (bt) //�����λ���нڵ�
	{
		int ti=0, tj=0;
		*(a + (i * width) + j) = bt->data; //������õ������ַ�
		if (bt->lch ) //�����Һ��Ӹ���Ӧ��������,���Һ��ӵ�ֵ����һ��ݹ鸳
		{
			//���õ���������֮�������ȫ������'/'
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
		//����ѭ��,tiǡ��ָ���亢�����ڵĲ�
		fillArray(bt->lch , a, ti, j - (height - i + 1) / 2);
		fillArray(bt->rch , a, ti, j + (height - i + 1) / 2);
	}
}
void printBiTree(Bitree& bt)
{
	int i, j;
	int n = DeepTree(bt); //��������n
	//�ڼ�����������Զ�������ʽ�洢,����һ����������1λ���൱�ڳ���2��1�η�
	width = (2 << n) - 3;  // 2^(n+1)-3
	height = (2 << (n - 1)) - 1; // 2^n-1
	char* a = (char*)malloc(sizeof(char) * (width * height)); // ����ռ�

	// �ռ��ʼ��Ϊ0
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(a + (i * width) + j) = 0;
		}
	}
	//����֮ǰ����õĺ���,����ӡ����
	fillArray(bt, a, 0, (width - 1) / 2);
	//���ݴ�ӡ�����������ʵ�ִ�ӡ
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
//������������
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
//������,��������ַ������������ʽ���������
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
//�������
Status PreOrderTraversal(Bitree &bt) {
	if (bt) {
		cout << (char)bt->data<< " ";
		PreOrderTraversal(bt->lch);
		PreOrderTraversal(bt->rch);
		return OK;
	}
}
//�������
Status InOrderTraversal(Bitree& bt) {
	if (bt) {
		InOrderTraversal(bt->lch);
		cout << (char)bt->data << " ";
		InOrderTraversal(bt->rch);
		return OK;
	}
}
//�������
Status PostOrderTraversal(Bitree& bt) {
	if (bt) {
		PostOrderTraversal(bt->lch);
		PostOrderTraversal(bt->rch);
		cout << (char)bt->data << " ";
		return OK;
	}
}
//����Ҷ�ӽ��ĸ���
int LeafCount(Bitree& bt) {
	if (bt == NULL)
		return 0;
	else if (LeafCount(bt->lch) + LeafCount(bt->rch) == 0)
		return 1;
}
//�����Ϊ1���ĸ���
int one = 0;
void  NodeCount1(Bitree &bt) {
	if (bt) {
		if (bt->lch == NULL && bt->rch != NULL || bt->lch != NULL && bt->rch == NULL)
			one++;
		NodeCount1(bt->lch);
		NodeCount1(bt->rch);
	}
}
//�����Ϊ2���ĸ���
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
		cout << "|  1.������������            |" << endl;
		cout << "|  2.�������                    |" << endl;
		cout << "|  3.�������                    |" << endl;
		cout << "|  4.�������                     |" << endl;
		cout << "|  5.ͳ��Ҷ������           |" << endl;
		cout << "|  6.ͳ�ƶ�Ϊ1�Ľ�����  |" << endl;
		cout << "|  7.ͳ�ƶ�Ϊ2�Ľ�����  |" << endl;
		cout << "|  8.�������Һ��ӽ��       |" << endl;
		cout << "|  0.�˳�                           |" << endl;
		cout << "------------------------" << endl;
		cout << "�𾴵��û�����,��ѡ��Ҫִ�еĲ���" << endl;
		switch (n = input()) {
		case 1:cout << "���ڴ���" << endl; CreateTree(bt); printBiTree(bt); break;
		case 2:cout << "���ڽ����������" << endl; PreOrderTraversal(bt) ? suc() : fai(); break;
		case 3:cout << "���ڽ����������" << endl; InOrderTraversal(bt) ? suc() : fai(); break;
		case 4:cout << "���ڽ��к������" << endl; PostOrderTraversal(bt) ? suc() : fai(); break;
		case 5:cout << "ͳ��Ҷ���ĸ���" << endl; cout << "Ҷ�ӽ�����Ϊ" << LeafCount(bt) << endl;break;
		case 6:cout << "����ͳ�ƶ�Ϊ1�Ľ�����" << endl; NodeCount1(bt); cout << "��Ϊ1������Ϊ" << one << endl; break;
		case 7:cout << "����ͳ�ƶ�Ϊ2�Ľ�����" << endl; NodeCount2(bt); cout << "��Ϊ2������Ϊ" << two << endl; break;
		case 8:cout << "���ڽ������Һ��ӽ��" << endl;  SwapBt(bt) ? suc() : fai(); break;
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