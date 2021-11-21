/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 15:29:00
 * @LastEditTime: 2021-11-21 15:30:22
 * @LastEditors: Please set LastEditors
 * @Description: 指针的代数运算：越界问题
 * @FilePath: /CPlus/shiqiyu_cplus/5.2.3_pointer_bound.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int a;
    int num = 0;
    int *p = &num;

    p[-1] = 2;    //out of bound
    p[0] = 3;     //okay
    *(p + 1) = 4; //out of bound

    cout << "num = " << num << endl;

    return 0;
}