/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 14:44:42
 * @LastEditTime: 2021-11-21 14:46:22
 * @LastEditors: Please set LastEditors
 * @Description: 指针的指针
 * @FilePath: /CPlus/shiqiyu_cplus/5.1.3_pointer_pointer.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int *p = &num;
    int **pp = &p;  // 指针的指针，*pp 是指针p的首地址
    *(*pp) = 20;

    cout << "num = " << num << endl;

    return 0;
}
// results
// num = 20