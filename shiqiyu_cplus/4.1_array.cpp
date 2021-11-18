/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:17:55
 * @LastEditTime: 2021-11-18 23:19:19
 * @LastEditors: Please set LastEditors
 * @Description: array and init it
 * @FilePath: /CPlus/shiqiyu_cplus/4.1_array.cpp
 */
#include <iostream>
using namespace std;
int main()
{
    int num_array1[5];                   //uninitialized array, random values
    int num_array2[5] = {0, 1, 2, 3, 4}; //initialization

    for (int idx = 0; idx < 5; idx++)
        cout << num_array1[idx] << " ";
    cout << endl;

    for (int idx = 0; idx < 5; idx++)
        cout << num_array2[idx] << " ";
    cout << endl;

    return 0;
}
// 2 0 2023316253 21887 1452178240
// 0 1 2 3 4
