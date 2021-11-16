/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:52:11
 * @LastEditTime: 2021-11-16 22:13:45
 * @LastEditors: Please set LastEditors
 * @Description: float data type
 * @FilePath: /CPlus/shiqiyu_cplus/2.3_float.cpp
 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float f1 = 1.2f;
    float f2 = f1 * 1000000000000000; //1.0e15
    cout << std::fixed << std::setprecision(15) << f1 << endl;
    cout << std::fixed << std::setprecision(15) << f2 << endl;
    return 0;
}

// 1.200000047683716
// 1200000038076416.000000000000000