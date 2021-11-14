/*
 * @Author: your name
 * @Date: 2021-11-14 22:40:43
 * @LastEditTime: 2021-11-14 22:42:58
 * @LastEditors: Please set LastEditors
 * @Description: sizeof operation to show the byte size of a variable
 * @FilePath: /CPlus/shiqiyu_cplus/2.2_sizeof.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    short s = 0;
    cout << "sizeof(int)=" << sizeof(int) << endl;
    cout << "sizeof(i)=" << sizeof(i) << endl;
    cout << "sizeof(short)=" << sizeof(s) << endl;
    cout << "sizeof(long)=" << sizeof(long) << endl;
    cout << "sizeof(size_t)=" << sizeof(size_t) << endl;
    return 0;
}

// ---- result ---- //
// sizeof(int)=4
// sizeof(i)=4
// sizeof(short)=2
// sizeof(long)=8
// sizeof(size_t)=8