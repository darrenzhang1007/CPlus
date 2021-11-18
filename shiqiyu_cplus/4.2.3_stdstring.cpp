/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:58:30
 * @LastEditTime: 2021-11-18 23:58:34
 * @LastEditors: Please set LastEditors
 * @Description: string class
 * @FilePath: /CPlus/shiqiyu_cplus/4.2.3_stdstring.cpp
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string str1 = "Hello";
    std::string str2 = "SUSTech";
    std::string result = str1 + ", " + str2;

    cout << "result = " + result << endl;

    cout << "The length is " << result.length() << endl;

    cout << "str1 < str2 is " << (str1 < str2) << endl;

    return 0;
}

// result = Hello, SUSTech
// The length is 14
// str1 < str2 is 1
