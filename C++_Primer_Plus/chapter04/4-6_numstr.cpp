/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-14 10:05:31
 * @LastEditTime : 2022-03-14 19:48:22
 * @LastEditors  : DarrenZhang
 * @Description  : 混合输入字符串和数字
 * @FilePath     : \CPlus\C++_Primer_Plus\chapter04\4-6_numstr.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    cout << "What year was your house built?" << endl;
    int year;
    cin >> year;
    cin.get(); // read enter line
    // (cin >> year).get();
    cout << "What is its street address?" << endl;

    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;

    return 0;
}