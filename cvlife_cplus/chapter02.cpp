#include <iostream>
#include <string>

using namespace std;

int g_a = 10; // 全局变量

int main()
{
    // 基本内置类型 变量 引用与指针 const限定符 自定义数据结构
    // 语法：法律规定  经验：道德约束

    // 全局变量与局部变量重名（尽量杜绝此类现象）
    int g_a = 20;
    cout << g_a << endl;                        // 最近准则，重名，局部变量会屏蔽全局变量
    cout << "全局变量g_a为: " << ::g_a << endl; // 打印全局变量g_a

    // 静态变量：存储在静态存储区，一直到程序完成之后，才会被销毁。
    // 静态变量具有全局变量的生命周期，但只能作用于自己的作用域
    static int b = 8;
    for (int i = 0; i < 10; i++)
    {
        static int c = 1;
        c++;
        cout << c << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        int c = 1;
        c++;
        cout << c << endl;
    }

    // 数据类型选取
    // 1. 一般选int，short太小，int不够选long long
    // 2. 如果数值不可能为负数的时候，选无符号;无符号和有符号不能混用
    // 3. 不建议使用char做算术运算
    // 4. 浮点数运算最好选用double，精度高，而且性能和float几乎没有差别

    // 养成变量创建就要初始化的好习惯，特别是指针
    // 内置数据类型有默认值，但是不建议依赖这个

    // 少用多层的指针，最多用到两层（指向指针的指针）
    int* p = &b;
    int** pp = &p;

    return 0;
}