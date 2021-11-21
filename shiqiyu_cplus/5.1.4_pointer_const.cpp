/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 14:46:41
 * @LastEditTime: 2021-11-21 14:49:49
 * @LastEditors: Please set LastEditors
 * @Description: 常量指针，不可更改
 * @FilePath: /CPlus/shiqiyu_cplus/5.1.4_pointer_const.cpp
 */
#include <iostream>
using namespace std;

int foo(const char *p)
{
    // the value that p points to cannot be changed
    // play a trick?
    char *p2 = p; //syntax error
    //...
    return 0;
}

int main()
{
    int num = 1;
    int another = 2;

    //You cannot change the value that p1 points to through p1
    // 指针指向的内容不可通过该指针去修改
    const int *p1 = &num;
    *p1 = 3; //error，由于p1是常量指针，无法通过指针修改指向的num内存地址存放的内容
    num = 3; //okay，但是num不是常量，所以可以直接修改其值

    //You cannot change value of p2 (address)
    // 可以修改指针指向的内容，但是不可以修改指针指向的地址
    int *const p2 = &num; // p2存放的是num的地址，
    *p2 = 3;       //okay，修改地址指向的内存空间的内容是ok的
    p2 = &another; //error，但是还是不能修改指针的内容。始终指向num的地址，不可修改地址

    //You can change neither
    const int *const p3 = &num;
    *p3 = 3;       //error
    p3 = &another; // error

    return 0;
}