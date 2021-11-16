/*
 * @Author: DarrenZhang
 * @Date: 2021-11-16 22:15:00
 * @LastEditTime: 2021-11-16 22:21:47
 * @LastEditors: Please set LastEditors
 * @Description: float precision problem show
 * @FilePath: /CPlus/shiqiyu_cplus/2.3_precision.cpp
 */
#include <iostream>
#include <float.h>
#include <math.h>

using namespace std;

int main()
{
    float f1 = 2.34E+10f;
    float f2 = f1 + 10; // but f2 == f1

    cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point

    cout << "f1 = " << f1 << endl;
    cout << "f2 = " << f2 << endl;
    cout << "f1 - f2 = " << f1 - f2 << endl;
    cout << "(f1 - f2 == 0) = " << (f1 - f2 == 0) << endl;
    cout << "(f1 - f2 == 0) = " << (fabs(f1 - f2) < FLT_EPSILON) << endl;

    return 0;

}