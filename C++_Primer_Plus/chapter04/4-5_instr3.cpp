/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-14 10:05:31
 * @LastEditTime : 2022-03-14 11:12:12
 * @LastEditors  : DarrenZhang
 * @Description  :
 * @FilePath     : \CPlus\C++_Primer_Plus\chapter04\4-5_instr3.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    // 1. cin.getline(数组名称, 读取的字符数)
    // cout << "Enter your name: " << endl;
    // cin.getline(name, ArSize); // reads through newline
    // cout << "Enter your favorite dessert: " << endl;
    // cin.getline(dessert, ArSize);
    // cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    // 2. cin.get(数组名称, 读取的字符数) 的缺陷
    // cout << "Enter your name: " << endl;
    // cin.get(name, ArSize); // reads string, newline
    // cout << "Enter your favorite dessert: " << endl;
    // cin.get(dessert, ArSize);
    // cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;
    // dessert is ' '，空字符

    // 3. cin.get() 正确用法：读取下一个字符
    cout << "Enter your name: " << endl;
    // cin.get(name, ArSize); // reads first line，返回的仍然是cin对象
    // cin.get();             // read newline; read 'enter' line
    cin.get(name, ArSize).get(); // concatenate member functions
    cout << "Enter your favorite dessert: " << endl;
    cin.get(dessert, ArSize).get(); // read second line

    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    return 0;
}