/*
 * @Author: your name
 * @Date: 2021-11-21 14:34:08
 * @LastEditTime: 2021-11-21 14:39:04
 * @LastEditors: Please set LastEditors
 * @Description: 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 * @FilePath: /CPlus/shiqiyu_cplus/5.1.1_pointer.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    int *p1 = NULL, *p2 = NULL; // declaration, initialize to 0
    p1 = &num;                  // take the address of num , assign to p1
    p2 = &num;                  // take the address of num , assign to p2

    *p1 = 20; // assign 20 to num
    cout << "num = " << num << endl;
    *p2 = 30; // assign 30 to num
    cout << "num = " << num << endl;

    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    return 0;
}

// num = 20
// num = 30
// p1 = 0x7ffcb6e67af4
// p2 = 0x7ffcb6e67af4
// p1 和 p2 同时指向num所在的内存空间，