/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:29:29
 * @LastEditTime: 2021-11-14 22:36:16
 * @LastEditors: Please set LastEditors
 * @Description: `int` type of data
 * @FilePath: /CPlus/2.1_integer.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int num1; // bad: uninitialized variable
    int num2; // bad: uninitialized variable

    cout << "num1 = " << num1 << endl; // num1 = 32764
    cout << "num2 = " << num2 << endl; // num2 = 0
    // Uninitialized variables may have random values.
    // Please initialize variables EXPLICITLY!

    int num;
    num = 10; // do not forget this line to initialize variables EXPLICITLY

    // common methods
    // int num = 10;
    // int num(10);
    // int num{10}; // C++ 11
    cout << "num = " << num << endl;

    return 0;
}