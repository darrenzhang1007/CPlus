/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-13 16:07:52
 * @LastEditTime : 2022-03-13 16:07:52
 * @LastEditors  : DarrenZhang
 * @Description  :
 * @FilePath     : /CPlus/C++_Primer_Plus/chapter04/4.1_arrayone.cpp
 */
#include <iostream>

int main()
{
    using namespace std;

    int yams[3]; // create array with three elements
    yams[0] = 7; // assign value to first element
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // create, initialize array

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;

    cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam." << endl;

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents." << endl;

    cout << "Size of yams array = " << sizeof(yams) << " bytes." << endl;     // 计算数组的内存占用
    cout << "Size of one element = " << sizeof(yams[0]) << " bytes." << endl; // 计算数组中单个元素的内存占用

    // sizeof 对于变量可以使用括号或者不使用括号，但是对于 数据类型 来说，必须加括号
    cout << "Size of int type = " << sizeof(int) << " bytes." << endl;
    cout << "Size of short type = " << sizeof(short) << " bytes." <<  endl;
    cout << "Size of float type = " << sizeof(float) << " bytes." <<  endl;
    cout << "Size of double type = " << sizeof(double) << " bytes." <<  endl;

    // cout << sizeof int << endl;  // error

    return 0;
}