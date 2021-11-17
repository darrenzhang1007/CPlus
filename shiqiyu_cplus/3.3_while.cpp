/*
 * @Author: DarrenZhang
 * @Date: 2021-11-17 23:35:04
 * @LastEditTime: 2021-11-17 23:50:09
 * @LastEditors: Please set LastEditors
 * @Description: while statement
 * @FilePath: /CPlus/shiqiyu_cplus/3.3_while.cpp
 */

#include <iostream>

using namespace std;

int main()
{
    int num = 10;
    while (num > 0)
    {
        cout << "num = " << num << endl;
        num--;
    }
    // num = 10
    // num = 9
    // num = 8
    // num = 7
    // num = 6
    // num = 5
    // num = 4
    // num = 3
    // num = 2
    // num = 1

    int num_1 = 10;
    do
    {
        cout << "num_1 = " << num_1 << endl;
        num_1--;
    } while (num_1 > 0);
    // num_1 = 10
    // num_1 = 9
    // num_1 = 8
    // num_1 = 7
    // num_1 = 6
    // num_1 = 5
    // num_1 = 4
    // num_1 = 3
    // num_1 = 2
    // num_1 = 1

    int num_2 = 10;
    while (num_2 > 0)
    {
        if (num_2 == 5)
            break;
        cout << "num_2 = " << num_2 << endl;
        num_2--;
    }
    // num_2 = 10
    // num_2 = 9
    // num_2 = 8
    // num_2 = 7
    // num_2 = 6

    // int num_3 = 10;
    // while (num_3 > 0)
    // {
    //     if (num_3 == 5)
    //         continue;
    //     cout << "num_3 = " << num_3 << endl;
    //     num_3--;
    // }
    // num_3 = 10
    // num_3 = 9
    // num_3 = 8
    // num_3 = 7
    // num_3 = 6
    // 陷入死循环

    // size_t num_4 = 10;
    // while (num_4 >= 0)
    // {
    //     // size_t 无符号整数，0-- 的时候，就会变成最大的整数
    //     cout << "num_4 = " << num_4 << endl;
    //     num_4--;
    // }

    bool flag = true;
    int count = 0;
    cout << "(flag = true) is :" << (flag = true) << endl; // 1
    // while (flag = true)
    // {
    //     cout << "count = " << count++ << endl;
    //     // and do sth
    //     if (count == 10)  //meet a condition
    //         flag = false; //set flag to false to break the loop
    // }

    int b = 0;
    int m = (b = 8);
    cout << "m="<< m << endl; // m = 8,or 0

    return 0;
}