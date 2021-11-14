/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 22:24:10
 * @LastEditTime: 2021-11-14 22:27:41
 * @LastEditors: Please set LastEditors
 * @Description: argument
 * @FilePath: /CPlus/shiqiyu_cplus/1.5_argument.cpp
 * @RunCode: g++ 1.5_argument.cpp && ./a.out 1 2 3 4 5
 */
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        cout << i << ": " << argv[i] << endl;
    }

    return 0;
}

/**
 * results"
 * 0: ./a.out
 * 1: 1
 * 2: 2
 * 3: 3
 * 4: 4
 * 5: 5
 */
