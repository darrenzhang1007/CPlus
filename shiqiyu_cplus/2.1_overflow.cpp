/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:36:57
 * @LastEditTime: 2021-11-14 22:39:19
 * @LastEditors: Please set LastEditors
 * @Description: overflow
 * @FilePath: /CPlus/shiqiyu_cplus/2.2_overflow.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int a = 56789;
    int b = 56789;
    int c = a * b;

    cout << "c = " << c << endl; // c = -1069976775

    unsigned int c1 = a * b;
    cout << "c1 = " << c1 << endl; // c1 = 3224990521
    // Although the result is correctly, this is a danger operation.
}