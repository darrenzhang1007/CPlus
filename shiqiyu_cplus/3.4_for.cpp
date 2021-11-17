/*
 * @Author: DarrenZhang
 * @Date: 2021-11-17 23:50:56
 * @LastEditTime: 2021-11-17 23:52:03
 * @LastEditors: Please set LastEditors
 * @Description: for loop
 * @FilePath: /CPlus/shiqiyu_cplus/3.4_for.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    // for(int i = 0; i < 10; i+=2)  //也可以这样写
    for (int i = 0; i < 10; i++)
    {
        sum += i;
        cout << "Line " << i << endl;
    }
    cout << "sum = " << sum << endl;

    return 0;
}