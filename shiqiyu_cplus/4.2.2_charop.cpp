/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:54:30
 * @LastEditTime: 2021-11-18 23:57:25
 * @LastEditors: Please set LastEditors
 * @Description: char compare
 * @FilePath: /CPlus/shiqiyu_cplus/4.2.2_char_compare.cpp
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[] = "Hello, \0CPP";
    char str2[] = "SUSTech";
    char result[128];

    for (int i = 0; i < 16; i++)
        cout << i << ":" << +str1[i] << "(" << str1[i] << ")" << endl;

    strcpy(result, str1); // 字符串copy
    cout << "Result = " << result << endl;
    strcat(result, str2); // 字符串拼接 str2 -> result
    cout << "Result = " << result << endl;

    cout << "strcmp() = " << strcmp(str1, str2) << endl;

    strcat(str1, str2); //danger operation!
    cout << "str1 = " << str1 << endl;
}
// 0:72(H)
// 1:101(e)
// 2:108(l)
// 3:108(l)
// 4:111(o)
// 5:44(,)
// 6:32( )
// 7:0()
// 8:67(C)
// 9:80(P)
// 10:80(P)
// 11:0()
// 12:64(@)
// 13:-118(�)
// 14:-33(�)
// 15:21()
// Result = Hello, 
// Result = Hello, SUSTech
// strcmp() = -11
// str1 = Hello, SUSTech