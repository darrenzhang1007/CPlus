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
    // 1. C++11 字符串初始化
    char first_data[] = {"Le Chapon Dodu; "};
    char second_data[]{"The Elegant Plate; "};
    string third_data = {"The Bread Bowl; "};
    string fourth_data{"Hank's Fine Eats; "};
    cout << first_data << second_data << third_data << fourth_data << endl;

    // 2. 赋值、合并拼接操作
    char charr1[20];            // create an empty array
    char charr2[20] = "jaguar"; // create an initialized array
    // charr1 = charr2;            // not allowed, no array assignment
    cout << "charr1 = charr2 is not allowed" << endl;
    string str1;             // create an empty strting object
    string str2 = "panther"; // create an initialized string
    str1 = str2;             // valied, object assignment ok
    cout << "str1: " << str1 << "str2: " << str2 << endl;

    string s1 = "penguin";
    string s2, s3;

    cout << "Your can assign one string object to another: s2 = s1" << endl;
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;

    cout << "You can assign a C-style string to a string object." << endl;
    cout << "s2 = \"buzzard\"" << endl;
    s2 = "buzzard";
    cout << "s2: " << s2 << endl;

    cout << "You can concatenate strings: s3 = s1 + s2" << endl;
    s3 = s1 + s2;
    cout << "s3: " << s3 << endl;

    cout << "You can append strings." << endl;
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;

    s2 += " for a day";
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;

    return 0;
}

// 输出
// Le Chapon Dodu; The Elegant Plate; The Bread Bowl; Hank's Fine Eats;
// Your can assign one string object to another: s2 = s1
// s1: penguin, s2: penguin
// You can assign a C-style string to a string object.
// s2 = "buzzard"
// s2: buzzard
// You can concatenate strings: s3 = s1 + s2
// s3: penguinbuzzard
// You can append strings.
// s1 += s2 yields s1 = penguinbuzzard
// s2 += " for a day" yields s2 = buzzard for a day