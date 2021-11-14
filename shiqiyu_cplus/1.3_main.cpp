/*
 * @Author: your name
 * @Date: 2021-11-14 22:04:53
 * @LastEditTime: 2021-11-14 22:11:19
 * @LastEditors: Please set LastEditors
 * @Description: the step of compile and link
 * @FilePath: /CPlus/shiqiyu_cplus/1.3_main.cpp
 */
#include <iostream>
#include "1.3_mul.hpp"

using namespace std;

int main()
{
    int a, b;
    int result;

    cout << "Pick two integers: ";
    cin >> a >> b;

    result = mul(a, b);
    cout << "The result is " << result << endl;

    return 0;
}