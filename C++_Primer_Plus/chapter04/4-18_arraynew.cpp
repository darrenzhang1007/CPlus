/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-20 18:02:58
 * @LastEditTime : 2022-03-20 18:02:58
 * @LastEditors  : DarrenZhang
 * @Description  : 通过指针，访问动态数组中的元素
 * @FilePath     : /CPlus/C++_Primer_Plus/chapter04/4-18_arraynew.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    double *p3 = new double[3]; // 初始化一个能够存放3个double类型元素的动态数组

    // p3指针指向动态开辟出来的内存空间，并将其当作数组名，访问元素
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << "." << endl;

    p3 = p3 + 1;
    // 原先p3指针指向的是数组中的第一个元素，现在p3指针往后移动一个元素，指向的是原始动态数组中的第二个元素
    cout << "Now p3[0] is " << p3[0] << "." << endl;
    cout << "Now p3[1] is " << p3[1] << "." << endl;

    p3 = p3 - 1;
    cout << "Now p3[0] is " << p3[0] << "." << endl;
    cout << "Now p3[1] is " << p3[1] << "." << endl;

    delete[] p3;

    return 0;
}
