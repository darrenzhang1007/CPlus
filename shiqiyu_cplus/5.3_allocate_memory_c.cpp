/*
 * @Author: your name
 * @Date: 2021-11-21 15:32:08
 * @LastEditTime: 2021-11-21 15:32:09
 * @LastEditors: Please set LastEditors
 * @Description: C语言分配内存
 * @FilePath: /CPlus/shiqiyu_cplus/5.3_allocate memory_c.c
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;

    int *p1 = (int *)malloc(4);
    int *p2 = (int *)malloc(4);
    int *p3 = (int *)malloc(4);

    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;

    free(p1);
    free(p2);
    free(p3);

    return 0;
}
