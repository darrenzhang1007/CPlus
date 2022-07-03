// 跳转语句
#include <string>
#include <iostream>

using namespace std;

int main()
{
    // break in switch or 循环(while、for、do...while)
    // 中止离他最近的循环，彻底中止此循环
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (j > i)
            {
                cout << endl;
                break;
            }
            cout << i << " * " << j << " = " << i * j << " ";
        }
        cout << endl;
    }

    // continue - 中止离它最近的循环的当前迭代步骤
    string str = "i love study c++ very much!";
    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            continue;
        }
        cout << c << endl;
    }

    // return - 函数返回

    // goto - 无条件跳转, 各大标准不允许使用此语句, 不建议使用
    int a = 0;
label:
    int c = 9;
    a = a + 1;
    goto label;
    int b = 9;
    b = b + 1;
    return 0;
}