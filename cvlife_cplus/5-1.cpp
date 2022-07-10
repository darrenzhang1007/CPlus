// 函数定义与声明
#include <string>
#include <iostream>

using namespace std;

string func(string str); // 函数声明

void print_string(string x)
{
    func(x); // 未声明时，直接调用程序会报错
    cout << x << endl;
}

int print_string_2(string x)
{
    if (x.empty())
        return -1;

    cout << x << endl;
    return 0;
}

string func(string str)
{
    return str;
}

int main()
{
    string str = "cplusplus";
    print_string(str);

    int res = print_string_2(str);
    if (res == -1)
    {
        cout << "input string is empty" << endl;
    }

    return 0;
}