using namespace std;
class student {
public:
    student();
    student(string num, string name, int score1, int score2, int score3); //构造函数
    ~student(); //析构函数
    static int count; //静态成员变量，表示学生人数
    string num; //学号
    string name; //姓名
    int score[3]; //三门课程成绩
    int stu_sum(); //计算总分
    friend void kc_dj(student stu); //友元函数，输出每门课程的等级
    void print(); //输出学生信息
};
