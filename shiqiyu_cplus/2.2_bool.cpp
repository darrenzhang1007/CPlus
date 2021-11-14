/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:46:12
 * @LastEditTime: 2021-11-14 22:47:55
 * @LastEditors: Please set LastEditors
 * @Description: bool data type
 * @FilePath: /CPlus/shiqiyu_cplus/2.2_bool.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    bool b1 = true;
    int i = b1;            // Implicit type conversion
    bool b2 = -256;        // unrecommended conversion. the value of b is true
    bool b2 = (-256 != 0); // better choice

    cout << "i=" << i << endl;
    cout << "b1=" << b1 << endl;
    cout << "b2=" << b2 << endl;
    cout << true << endl;
    return 0;
}