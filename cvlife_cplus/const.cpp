#include <iostream>
#include <string>

using namespace std;

void func(int& arg)
{
    // 函数的参数是个引用，在函数内部可以修改该值，并实现回传，并不需要return
    arg = arg + 10;
}

void func_const(const int& arg)
{
    // 函数的参数是个引用，在函数内部可以修改该值，并实现回传，并不需要return
    // arg = arg + 10; // 无法对该引用操作，该引用是个常量类型
}

int main()
{
    // const 修饰符
    // const 修饰变量，就变成了常量，不可修改
    const int a = 10; // 常量
    // a = 20;

    // const修饰指针
    // 01. const修饰指针指向的值，那么该值是不可修改的
    // 02. const修饰指针，那么该指针指向的地址是不可修改的
    int b = 9;
    const int* p = &b;
    cout << "p指针存储的内容: " << *p << endl;
    // *p = 10; // 无法修改
    int* const p1 = &b; // const修饰的是指针p1，所以p1所指的地址也是不可改变的
    // p1 = &a; // 无法修改

    // const传参，保证参数不会被函数内部修改
    int c = 10;
    cout << "函数执行前：" << c << endl;
    func(c);
    cout << "函数执行后：" << c << endl;

    return 0;
}