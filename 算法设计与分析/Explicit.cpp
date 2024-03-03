#include <iostream>
using namespace std;
class A
{
public:
    A(int i = 5)
    {
        m_a = i;
    }
private:
    int m_a;
};

int main()
{
    A s;
    //我们会发现,我们没有重载'='运算符,但是去可以把内置的int类型赋值给了对象A.
    s = 10;
    //实际上,10被隐式转换成了下面的形式,所以才能这样.
    //s = A temp(10);
    system("pause");
    return 0;
}