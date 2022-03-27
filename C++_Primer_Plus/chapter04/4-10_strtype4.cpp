/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-14 10:05:31
 * @LastEditTime : 2022-03-14 20:32:29
 * @LastEditors  : DarrenZhang
 * @Description  : string 类 I/O
 * @FilePath     : \CPlus\C++_Primer_Plus\chapter04\4-10_strtype4.cpp
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char charr[20]; // 只开辟了20个字节的内存大小，并没有初始化，还是保留了内存中原始的值
    string str;
    // strlen(charr): 统计charr中从第一个元素到'\0'的元素个数
    cout << "Length of string in charr before input: " << strlen(charr) << endl; // is not 20
    cout << "Length of string in str before input: " << str.size() << endl;

    cout << "Enter a line of text:" << endl;
    cin.getline(charr, 20); // indicate maximum length, 是istream类的成员函数，类方法
    cout << "You entered: " << charr << endl;

    cout << "Enter another line of text:" << endl;
    getline(cin, str); // cin now an argument; no length specifier，不是类方法，单纯的一个方法
    cout << "Your entered: " << str << endl;

    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input " << str.size() << endl;

    cin >> str; // read a word into the str string object
    cout << str << endl;
    int x;
    cin >> x; // read a value into a basic C++ type
    cout << x << endl;

    return 0;
}
