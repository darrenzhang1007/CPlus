/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-14 10:05:31
 * @LastEditTime : 2022-03-14 11:28:30
 * @LastEditors  : DarrenZhang
 * @Description  :
 * @FilePath     : \CPlus\C++_Primer_Plus\chapter04\4-4_instr2.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: " << endl;
    // geline(数组名称, 要读取的字符数)
    cin.getline(name, ArSize); // reads through newline
    cout << "Enter your favorite dessert: " << endl;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    return 0;
}
