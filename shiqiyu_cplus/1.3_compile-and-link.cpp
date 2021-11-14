/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 21:59:11
 * @LastEditTime: 2021-11-14 22:01:44
 * @LastEditors: Please set LastEditors
 * @Description: C++的编译和链接
 * @FilePath: /CPlus/shiqiyu_cplus/1.3_compile-and-link.cpp
 */
#include <iostream>

using namespace std;

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int a, b;
    int result;

    cout << "Pick two integers: ";
    cin >> a;
    cin >> b;

    result = mul(a, b);
    cout << "The result is " << result << endl;

    return 0;
}