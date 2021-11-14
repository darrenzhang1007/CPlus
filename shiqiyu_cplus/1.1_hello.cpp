/*
 * @Author: DarrenZhang
 * @Date: 2021-11-14 21:40:25
 * @LastEditTime: 2021-11-14 21:57:57
 * @LastEditors: Please set LastEditors
 * @Description: the first C++ code
 * @FilePath: /CPlus/shiqiyu_cplus/1.1_hello.cpp
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "!"};

    for (const string& word: msg)
    {
        cout << word << " ";
    }
    return 0;
}