/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:16:31
 * @LastEditTime: 2021-11-14 22:22:58
 * @LastEditors: Please set LastEditors
 * @Description: 宏
 * @FilePath: /CPlus/shiqiyu_cplus/1.4_macros.cpp
 */
#include <iostream>
#define PI 2.14 + 1.0

using namespace std;

int main()
{
    double len_1 = 2 * PI * 3;
    double len_2 = 2 * (PI) * 3;

    cout << "len_1 = " << len_1 << endl;
    cout << "len_2 = " << len_2 << endl;
}

// len_1 -> 2 * 2.14 + 1.0 * 3 = 4.28 + 3.0 = 7.28
// len_2 -> 2 * (2.14 + 1.0) * 3 = 2 * 3.14 *3 = 18.84