// 内存分布介绍
#include <iostream>
#include <string>

using namespace std;

// 全局区域
int a = 0;
static int b = 1;

// 不可以返回局部变量的指针
int *func()
{
    int f = 6;
    int *p = &f;
    return p;
}
int main(int argc, char **argv)
{
    // 全局区域
    static int c = 2;
    const int d = 3;

    // 栈区
    int e = 4;

    // 堆区
    int *p = new int(5);

    // 不可以返回局部变量的指针
    int *p1 = func();

    return 0;
}