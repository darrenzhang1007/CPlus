/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:44:01
 * @LastEditTime: 2021-11-14 22:45:10
 * @LastEditors: Please set LastEditors
 * @Description: char data type
 * @FilePath: /CPlus/shiqiyu_cplus/2.2_char.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    char c1 = 'P';
    char c2 = 80;
    char c3 = 0x50;

    char16_t c4 = u'于';
    char32_t c5 = U'于';

    cout << c1 << ":" << c2 << ":" << c3 << endl; // 默认当作字符打印
    cout << +c1 << ":" << +c2 << ":" << +c3 << endl; // 在char变量前加上+，可以将其转成整数打印
    cout << c4 << endl;
    cout << c5 << endl;

    return 0;
}
