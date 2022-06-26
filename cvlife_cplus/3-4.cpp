// 成员访问与条件预算符
#include <string>
#include <iostream>

using namespace std;

struct Student
{
    /* data */
    string name = "Darren";
    int age = 25;
};

int main()
{
    // 1. 成员访问运算符 . or ->
    Student *stu = new Student(); // stu指针指向的是Student对象
    // 成员访问运算符
    cout << stu->name << " " << stu->age << endl;     // 指针->age
    cout << (*stu).name << " " << (*stu).age << endl; // *stu->解引用，使用 对象.age 的方式
    // 解引用运算符的优先级比成员访问运算符的优先级要低，

    // 2. 条件运算符
    // (条件表达式) ? (满足条件，执行此第一条语句)（不满足条件，执行此语句）
    int a = 10;
    int b = 5;
    int c;
    a > b ? (c = a) : (c = b); // if a > b, c=a else c = b 求较大值
    cout << "c is " << c << endl;

    // 单目运算符：++ --
    // 双目运算符：+ - × / %
    // 三目运算符：条件运算符

    return 0;
}