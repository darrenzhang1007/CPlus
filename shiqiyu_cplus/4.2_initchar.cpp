/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:36:35
 * @LastEditTime: 2021-11-18 23:51:28
 * @LastEditors: Please set LastEditors
 * @Description: Array-Style Strings and string class
 * @FilePath: /CPlus/shiqiyu_cplus/4.2_string.cpp
 */
#include <iostream>
#include <string>
#include <string.h>

using namespace std;
int main()
{
    char rabbit[16] = {'P', 'e', 't', 'e', 'r'}; // 数组的类型为char，元素个数为16个

    cout << "String length is " << strlen(rabbit) << endl;
    for (int i = 0; i < 16; i++)
        cout << i << ":" << +rabbit[i] << "(" << rabbit[i] << ")" << endl;

    char bad_pig[9] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g'};
    //a bad one! 正好9个元素，对待一个数组字符串时，字符串的结束标志就是0，如果没有，该字符串数组时不会停止的，直到找到0。
    char good_pig[10] = {'P', 'e', 'p', 'p', 'a', ' ', 'P', 'i', 'g', '\0'};

    cout << "Rabbit is (" << rabbit << ")" << endl;
    cout << "Pig's bad name is (" << bad_pig << ")" << endl;
    cout << "Pig's good name is (" << good_pig << ")" << endl;

    char name[10] = {'Y', 'u', '\0', 'S', '.', '0'};
    cout << strlen(name) << endl;

    return 0;
}
// String length is 5
// 0:80(P)
// 1:101(e)
// 2:116(t)
// 3:101(e)
// 4:114(r)
// 5:0()
// 6:0()
// 7:0()
// 8:0()
// 9:0()
// 10:0()
// 11:0()
// 12:0()
// 13:0()
// 14:0()
// 15:0()
// Rabbit is (Peter)
// Pig's bad name is (Peppa PigPeppa Pig) // 这说明 bad_pig 在 rabbit 前
// Pig's good name is (Peppa Pig)
// 2