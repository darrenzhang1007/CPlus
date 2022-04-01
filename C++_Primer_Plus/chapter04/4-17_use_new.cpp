/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-20 17:11:00
 * @LastEditTime : 2022-03-20 17:13:32
 * @LastEditors  : DarrenZhang
 * @Description  :
 * @FilePath     : /CPlus/C++_Primer_Plus/chapter04/4-17_use_new.cpp
 */
/*************************************************************************
    > File Name: homework.cpp
    > Author: DarrenZhang
    > Mail: darrenzhang1007@163.com
    > Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int nights = 1001;
    cout << "nights value = " << nights << ": location " << &nights << endl;

    int *pt = new int;
    *pt = 1001;
    cout << "int value = " << *pt << ": location = " << pt << endl;

    double *pd = new double;
    *pd = 10000001.0;

    cout << "double value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl; // 取出指针的地址
    cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd << ": size of *pd = " << sizeof(*pd) << endl;
    // double *pt = new double;
    // *pt = 100.1;
    // cout << "int value = " << *pt << ": location = " << pt << endl;

    return 0;
}

// nights value = 1001: location 0x7ffe50a35c54
// int value = 1001: location = 0x563846e34280
// double value = 1e+07: location = 0x563846e342a0
// location of pointer pd: 0x7ffe50a35c58
// size of pt = 8: size of *pt = 4
// size of pd = 8: size of *pd = 8