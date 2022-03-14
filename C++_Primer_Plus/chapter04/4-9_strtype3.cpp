/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-14 10:05:31
 * @LastEditTime : 2022-03-14 20:27:50
 * @LastEditors  : DarrenZhang
 * @Description  : string对象 && 字符数组
 * @FilePath     : \CPlus\C++_Primer_Plus\chapter04\4-9_strtype3.cpp
 */
#include <iostream>
#include <cstring> // make string class available
#include <string>  // C-style string library

using namespace std;

int main()
{
    char charr1[20];
    char charr2[20] = "jaguar";
    char charr3[50];
    string str1;
    string str2 = "panther";
    string str3;

    // assignment for string objects and character arrays
    str1 = str2;            // copy str2 to str1
    strcpy(charr1, charr2); // copy str2 to str1

    // appending for string objects and character arrays
    str1 += " paste";         // add paste to end od str1
    strcat(charr1, " juice"); // add juice to end of charr1

    // finding the length of a string object and a C-sytle string
    int len1 = str1.size();    // .size() 成员函数，obtain length of str1
    int len2 = strlen(charr1); // obtain length of charr1

    cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
    cout << "The string " << charr1 << " contains " << len2 << " characters." << endl;

    // C-style string 进行拼接
    strcpy(charr3, charr1);
    strcat(charr3, charr2);
    // string class
    str3 = str1 + str2;

    return 0;
}
