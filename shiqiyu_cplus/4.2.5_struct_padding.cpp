/*
 * @Author: your name
 * @Date: 2021-11-19 00:28:30
 * @LastEditTime: 2021-11-19 00:28:31
 * @LastEditors: Please set LastEditors
 * @Description: 结构体元素之间为了对齐，会进行padding操作
 * @FilePath: /CPlus/shiqiyu_cplus/4.2.5_struct_padding.cpp
 */
#include <iostream>
using namespace std;

struct Student1
{
    int id;
    bool male;
    char label;
    float weight;
};

struct Student2
{
    int id;
    bool male;
    float weight;
    char label;
};

int main()
{
    cout << "Size of Student1: " << sizeof(Student1) << endl; // 12
    cout << "Size of Student2: " << sizeof(Student2) << endl; // 16
    return 0;
}