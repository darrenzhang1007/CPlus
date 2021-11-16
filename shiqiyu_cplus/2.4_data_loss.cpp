/*
 * @Author: your name
 * @Date: 2021-11-16 23:30:08
 * @LastEditTime: 2021-11-16 23:35:31
 * @LastEditors: Please set LastEditors
 * @Description: data type precision loss
 * @FilePath: /CPlus/shiqiyu_cplus/2.4_data_loss.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int num_int1 = 0x7ABCDEF0;
    float num_int_float = num_int1;
    int num_int2 = (int)(num_int_float);

    cout << "num_int1 = " << num_int1 << endl;
    cout << "num_int_float = " << num_int_float << endl;
    cout << "num_int2 = " << num_int2 << endl;

    return 0;
}
// float -> int : 会损失精度
// num_int1 = 2059198192
// num_int_float = 2.0592e+09
// num_int2 = 2059198208