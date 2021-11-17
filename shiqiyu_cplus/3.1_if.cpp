/*
 * @Author: DarrenZhang
 * @Date: 2021-11-17 21:57:43
 * @LastEditTime: 2021-11-17 23:40:29
 * @LastEditors: Please set LastEditors
 * @Description: if condition
 * @FilePath: /CPlus/shiqiyu_cplus/3.1/2_if.cpp
 */
#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    if (num < 5)
        cout << "The number is less than 5. " << endl;

    if (num == 5)
    {
        cout << "The number is 5." << endl;
    }
    else
    {
        cout << "The number is not 5." << endl;
    }

    if (num < 5)
        cout << "The number is less than 5." << endl;
    else if (num > 10)
        cout << "The number is greater than 10." << endl;
    else
        cout << "The number is in range [5, 10]." << endl;

    if (num < 20)
        if (num < 5)
            cout << "The number is less than 5" << endl;
        else
            cout << "Where I'm?" << endl;

    bool isPositive = true;
    int factor = 0;

    if (isPositive)
        factor = 1;
    else
        factor = -1;
    cout << factor << endl;
    factor = isPositive ? 1 : -1;
    cout << factor << endl;

    if (-2 && true)
        cout << "The confition is true." << endl;

    if (!-2)
        cout << "(-2) is true, really?" << endl;

    float count = 0.2f;
    if (count)
        cout << "There are some." << endl;

    if (count != 0)
        cout << "There are some." << endl;

    int *p = new int[1024];
    if (!p)
        cout << "Memory has been allocated." << endl;

    if (p == NULL)
        cout << "Memory has been allocated." << endl;

    return 0;
}