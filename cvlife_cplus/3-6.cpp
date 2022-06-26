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
    // 表达式基础 算数与赋值运算符 逻辑与关系运算符 递增与递减运算符 成员访问与条件运算符 位运算符 类型转换

    // 运算符的多重含义 & * << >>
    int i = 5;
    int &ri = i;       // $出现在定义语句中,作为声明符号, 表示引用
    int *p;            // * 出现在定义语句中，作为声明符号，表示指针
    p = &i;            // &出现在赋值语句中，作为取地址符号使用
    *p = i;            // * 出现在赋值语句中，作为解引用符号使用
    int &r2 = *p;      // & 出现在定义语句中，作为声明符号，表示引用，* 出现在赋值语句中，作为解引用
    cout << i << endl; // 数据流输出

    i = i << 5; //左移动

    // 优先级拿不准可以用括号

    // sizeof(pointer)
    char str[] = "i love study C++!";
    cout << "sizeof(str): " << sizeof(str) << endl; // sizeof不会将数组转化为指针处理

    char *str1 = new char[20];
    str1 = str;
    cout << "sizeof(str1): " << sizeof(str1) << endl; // 指针本身大小，而不是指针指向的内存大小
    cout << "sizeof(p): " << sizeof(p) << endl;

    Student *stu = new Student();
    cout << "sizeof(stu): " << sizeof(stu) << endl;
    cout << "sizeof(*stu): " << sizeof(*stu) << endl;

    cout << "str中的字符个数: " << sizeof(str) / sizeof(char) << endl; // 求数组中的元素个数

    int d[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "sizeof(d): " << sizeof(d) << endl;
    cout << "d 中的元素个数为:" << sizeof(d) / sizeof(int) << endl;

    // 避免强制类型转换

    return 0;
}