#include "NewStudent.h"
#include <iostream>

string name = "students";
string NewStudent::teacher_name = "Mr. Zhang"; // 需要在类外进行定义

NewStudent::NewStudent()
    : name("wangsan"),
      age(10),
      address("beijing")
{
}

NewStudent::~NewStudent()
{
}

void NewStudent::print(string name)
{
    cout << name << endl; // 打印的是参数名称

    // 类内成员
    cout << this->name << endl;
    cout << NewStudent::name << endl;

    cout << ::name << endl; // 访问全局变量
}

void NewStudent::set_teacher_name(string name)
{
    // this->name = name;  // “this”只能用于非静态成员函数内部，静态的成员无法使用this
    teacher_name = name;
}