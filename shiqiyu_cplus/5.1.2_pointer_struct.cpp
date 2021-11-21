/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 14:39:23
 * @LastEditTime: 2021-11-21 14:44:30
 * @LastEditors: Please set LastEditors
 * @Description: 结构体指针
 * @FilePath: /CPlus/shiqiyu_cplus/5.1.2_pointer_struct.cpp
 */
#include <iostream>
#include <cstring>
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool male;
};

int main()
{
    Student stu = {"Yu", 2000, true}; // 实例一个stu结构体
    Student *pStu = &stu; // 将stu结构体的首地址赋值给pStu指针

    cout << stu.name << " was born in " << stu.born
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

    strncpy(pStu->name, "Li", 4);
    pStu->born = 2001;
    (*pStu).born = 2002; // code of above line is equal current.
    pStu->male = false;

    cout << stu.name << " was born in " << stu.born
         << ". Gender: " << (stu.male ? "male" : "female") << endl;

    printf("Address of stu: %p\n", pStu);       //C style
    cout << "Address of stu: " << pStu << endl; //C++ style
    cout << "Address of stu: " << &stu << endl;
    cout << "Address of member name: " << &(pStu->name) << endl;
    cout << "Address of member born: " << &(pStu->born) << endl;
    cout << "Address of member male: " << &(pStu->male) << endl;

    cout << "sizeof(pStu) = " << sizeof(pStu) << endl;

    return 0;
}

// results
// Yu was born in 2000. Gender: male
// Li was born in 2002. Gender: female
// Address of stu: 0x7ffda985df3c
// Address of stu: 0x7ffda985df3c
// Address of stu: 0x7ffda985df3c
// Address of member name: 0x7ffda985df3c
// Address of member born: 0x7ffda985df40
// Address of member male: 0x7ffda985df44
// sizeof(pStu) = 8