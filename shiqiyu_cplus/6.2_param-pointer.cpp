/*
 * @Author: your name
 * @Date: 2021-11-30 21:58:06
 * @LastEditTime: 2021-11-30 22:01:55
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /CPlus/shiqiyu_cplus/6.2_param-pointer.cpp
 */
#include <iostream>
using namespace std;

int foo1(int x)
{
    x += 10;
    return x;
}

int foo2(int *p)
{
    (*p) += 10;
    return *p;
}

int main()
{
    int num1 = 20;
    int num2 = foo1(num1);
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;

    int *p = &num1;
    int num3 = foo2(p);
    cout << "num1=" << num1 << endl;
    cout << "*p=" << *p << endl;
    cout << "num3=" << num3 << endl;

    return 0;
}