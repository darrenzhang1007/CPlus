/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:49:03
 * @LastEditTime: 2021-11-14 22:51:17
 * @LastEditors: Please set LastEditors
 * @Description: C++整数类型的位数表示混乱，C++11之后，引入了cstdint 头文件，定义了整数数据类型占用
 * @FilePath: /CPlus/shiqiyu_cplus/2.2_cstdin.cpp
 */
#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    cout << "INT8_MAX=" << INT8_MAX << endl; // int8的最小值
    cout << "INT8_MAX=" << INT8_MIN << endl; // INT8的最大值
    cout << "INT16_MIN=" << INT16_MIN << endl;
    cout << "INT16_MAX=" << INT16_MAX << endl;
    cout << "INT32_MIN=" << INT32_MIN << endl;
    cout << "INT32_MAX=" << INT32_MAX << endl;
    cout << "INT64_MAX=" << INT64_MAX << endl;

    return 0;
}


// INT8_MAX=127
// INT8_MAX=-128
// INT16_MIN=-32768
// INT16_MAX=32767
// INT32_MIN=-2147483648
// INT32_MAX=2147483647
// INT64_MAX=9223372036854775807