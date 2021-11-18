/*
 * @Author: DarrenZhang
 * @Date: 2021-11-18 23:52:56
 * @LastEditTime: 2021-11-18 23:53:21
 * @LastEditors: Please set LastEditors
 * @Description: 
 * @FilePath: /CPlus/shiqiyu_cplus/4.2_stdstring.cpp
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