/*
 * @Author: your name
 * @Date: 2021-11-30 22:16:42
 * @LastEditTime: 2021-11-30 22:16:42
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /CPlus/shiqiyu_cplus/6.5_inline.cpp
 */
#include <iostream>
using namespace std;

inline float max_function(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}

//#define MAX_MACRO(a, b) a>b ? a : b

#define MAX_MACRO(a, b) (a) > (b) ? (a) : (b)

int main()
{
    int num1 = 20;
    int num2 = 30;
    int maxv = max_function(num1, num2);
    cout << maxv << endl;

    maxv = MAX_MACRO(num1, num2);
    cout << maxv << endl;

    maxv = MAX_MACRO(num1++, num2++);
    cout << maxv << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;

    num1 = 0xAB09;
    num2 = 0xEF08;
    // 打开第4hang代码，测试使用宏时不加括号的效果，最好加括号
    // &位运算的优先级小于`>` 。
    maxv = MAX_MACRO(num1 & 0xFF, num2 & 0xFF);
    cout << maxv << endl;

    return 0;
}