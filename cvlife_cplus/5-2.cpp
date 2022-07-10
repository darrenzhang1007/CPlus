// 函数传参
#include <string>
#include <iostream>

using namespace std;

int print_strint(string x)
// x 为形参，在函数定义时，设置的参数叫做形参，占位，
{
    if (x.empty())
    {
        return -1;
    }
    cout << x << endl;
    return 0;
}

int print_string_2(string *x)
{
    // 解引用比取成员函数的优先级低，要加括号
    if ((*x).empty())
    {
        return -1;
    }

    cout << "x的地址为 " << x << endl;
    cout << *x << endl;
    return 0;
}

int print_string_3(string &x)
{
    // 传引用，相当于形参的别名
    if (x.empty())
    {
        return -1;
    }
    cout << x << endl;
    x = "ssdfs";
}

int main()
{
    string str = "cplusplus";
    int res = print_strint(str); // 传值：str在此位置为实参。需要拷贝

    cout << "str的地址为 " << &str << endl;
    int res2 = print_string_2(&str); // 传地址

    int res3 = print_string_3(str); // 传引用
    cout << "修改后的str " << str << endl;

    if ((res == 1) && (res2 == 1) && (res3 == 1))
    {
        cout << "input string is empty!" << endl;
    }

    return 0;
}