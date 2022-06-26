#include <string>
#include <iostream>

using namespace std;

struct Demo
{
    /* data */
    int num1 = 5;
    int num2 = 10;
};

int main()
{
    // 表达式
    // 3+2 a+b 3*4+2

    // 运算符求值顺序以及优先级
    // 3*4+2 (3+5)*4+2
    Demo demo;
    cout << demo.num1 << " " << demo.num2 << endl;
    cout << demo.num1 + demo.num2 << endl;
    cout << demo.num1 + 5 + demo.num2 * 4 << endl; // 5+5+10*4

    // 不同类型对象参与运算的对象转换
    float a = 10.9;
    int b = 5;
    cout << a + b << endl;

    // 括号无视优先级，优先级最高
    if ((a == b) || (a > 0)) {
        cout << "if" << endl;
    }

    return 0;
}