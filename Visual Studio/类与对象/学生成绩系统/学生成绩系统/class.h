using namespace std;
class student {
public:
    student();
    student(string num, string name, int score1, int score2, int score3); //���캯��
    ~student(); //��������
    static int count; //��̬��Ա��������ʾѧ������
    string num; //ѧ��
    string name; //����
    int score[3]; //���ſγ̳ɼ�
    int stu_sum(); //�����ܷ�
    friend void kc_dj(student stu); //��Ԫ���������ÿ�ſγ̵ĵȼ�
    void print(); //���ѧ����Ϣ
};
