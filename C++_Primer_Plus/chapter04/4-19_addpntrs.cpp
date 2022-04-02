/*************************************************************************
    > File Name: homework.cpp
    > Author: DarrenZhang
    > Mail: darrenzhang1007@163.com
    > Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};

    // here are two ways to get the address of an array
    double *pw = wages;     // name of an array = address
    short *ps = &stacks[0]; // or use address operator with array element
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    pw = pw + 1;
    cout << "add 1 to the pw pointer: " << endl;
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps = ps + 1;
    cout << "add 1 to the ps pointer: " << endl;
    cout << "ps = " << ps << ", *ps = " << *ps << endl;

    cout << "access two elements with array notation" << endl;
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation" << endl;
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

    cout << sizeof(wages) << " = size of wages array" << endl;
    cout << sizeof(pw) << " = size of pw pointer" << endl;

    /****  勘误109页数组的地址 ****/
    short tell[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "tell  = " << tell << endl; // 第一个元素的起始地址
    cout << "tell + 1 = " << tell + 1 << endl;
    cout << "&tell = " << &tell << endl;         // 整个数组的起始地址
    cout << "&tell + 1 = " << &tell + 1 << endl; // &tell + 1跨过了20个字节

    return 0;
}

// pw = 0x7ffffed51c10, *pw = 10000
// add 1 to the pw pointer:
// pw = 0x7ffffed51c18, *pw = 20000
// ps = 0x7ffffed51bea, *ps = 3
// add 1 to the ps pointer:
// ps = 0x7ffffed51bec, *ps = 2
// access two elements with array notation
// stacks[0] = 3, stacks[1] = 2
// access two elements with pointer notation
// *stacks = 3, *(stacks + 1) = 2
// 24 = size of wages array
// 8 = size of pw pointer
// tell  = 0x7ffffed51bf0
// tell + 1 = 0x7ffffed51bf2
// &tell = 0x7ffffed51bf0
// &tell + 1 = 0x7ffffed51c04