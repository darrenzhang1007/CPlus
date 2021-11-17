/*
 * @Author: DarrenZhang
 * @Date: 2021-11-17 23:52:32
 * @LastEditTime: 2021-11-17 23:57:06
 * @LastEditors: Please set LastEditors
 * @Description: goto statements
 * @FilePath: /CPlus/shiqiyu_cplus/3.5_goto.cpp
 */
#include <iostream>

using namespace std;

float mysquare(float value)
{
    float result = 0.0f;

    if (value >= 1.0f || value <= 0)
    {
        cerr << "The input is out of range." << endl;
        goto EXIT_ERROR;
    }
    result = value * value;
    return result;

EXIT_ERROR:
    //do sth such as closing files here
    return 0.0f;
}

int main()
{
    float value;
    cout << "Input a floating-point number." << endl;
    cin >> value;

    float result = mysquare(value);

    if (result > 0)
        cout << "The square is " << result << "." << endl;

    return 0;
}