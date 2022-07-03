// 异常处理
#include <string>
#include <iostream>
#include <exception>

using namespace std;

void fun(string str)
{
    cout << "I am a function: " << str << endl;
}

int main()
{
    string str1 = "i like study";
    string str2 = "cpp";

    string str3;
    int len;

    str3 = str1 + str2;
    cout << "str1 + str2 = " << str3 << endl;

    len = str3.size();
    cout << "str3.size() = " << len << endl;
    return 0;
}

/*
 * g++ -g 4-6.cpp -o main
 * gdb main
 * list：默认显示前10行代码
 * r: 运行，直到一个断点
 * b 行号：在第几行设置断点
 * info breakpoints: 打印断点信息
 * s: step -> 单步执行
 * whatis: 查看变量类型
*/