/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-14 10:05:31
 * @LastEditTime : 2022-03-14 20:05:50
 * @LastEditors  : DarrenZhang
 * @Description  : assigning, adding, and appending
 * @FilePath     : \CPlus\C++_Primer_Plus\chapter04\4-8_strtype2.cpp
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    string str1;                // create an empty strting object
    string str2 = "panther";    // create an initialized string
    // charr1 = charr2;            // not allowed, no array assignment
    str1 = str2; // valied, object assignment ok

    // 字符串合并拼接操作
    string str3;
    str3 = str1 + str2; // assign str3 the joined strings
    str1 += str2;       // add str2 to the end of str1

    string s1 = "penguin";
    string s2, s3;

    cout << "Your can assign one string object to another: s2 = s1" << endl;
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl << endl;

    cout << "You can assign a C-style string to a string object." << endl;
    cout << "s2 = \"buzzard\"" << endl;
    s2 = "buzzard";
    cout << "s2: " << s2 << endl << endl;

    cout << "You can concatenate strings: s3 = s1 + s2" << endl;
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl << endl;

    cout << "You can append strings." << endl;
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl << endl;

    s2 += " for a day";
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

    return 0;
}
