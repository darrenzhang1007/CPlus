/*
 * @Author: DarrenZhang
 * @Date: 2021-11-16 23:35:49
 * @LastEditTime: 2021-11-16 23:39:22
 * @LastEditors: Please set LastEditors
 * @Description: operation
 *      best way is add `()`
 * @FilePath: /CPlus/shiqiyu_cplus/2.4_operation.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int i = 17 / 5 * 5;
    int j = (17 / 5) * 5;

    cout << i << ' ' << j << endl;

    float f1 = 17 / 5;
    float f2 = 17 / 5.f;

    cout << f1 << ' ' << f2 << endl;

    unsigned char a = 255;
    unsigned char b = 1;

    int c = a + b;
    cout << "c = " << c << endl;
}

// 15 15
// 3 3.4
// c = 256