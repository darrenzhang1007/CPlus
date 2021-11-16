/*
 * @Author: DarrenZhang
 * @Date: 2021-11-16 22:22:45
 * @LastEditTime: 2021-11-16 22:23:57
 * @LastEditors: Please set LastEditors
 * @Description: inf and nan
 *  ● ±inf: infinity (Exponent=11111111, fraction=0)
    ● nan: not a number (Exponent=11111111, fraction!=0)
 * @FilePath: /CPlus/shiqiyu_cplus/2.3_inf_and_nan.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    float f1 = 2.0f / 0.0f;
    float f2 = 0.0f / 0.0f;
    cout << f1 << endl;
    cout << f2 << endl;
    return 0;
}

// inf
// -nan
// ● ±inf: infinity (Exponent=11111111, fraction=0)
// ● nan: not a number (Exponent=11111111, fraction!=0)