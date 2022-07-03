// 简单语句与顺序结构
#include <string>
#include <iostream>

using namespace std;

int main()
{
    // 表达式加上分号就是语句
    int a = 10;
    a + 5;
    a += 5;

    // 空语句 - 只有分号的语句
    // ;
    // while(a > 5);
    //     a --; // 执行不到此句

    // 复合语句 - 语句块(通过大括号)
    {
        int b = 6;
        b = b + 1;
    }
    // 顺序语句 - 顺序执行每条语句, 每条语句只执行一次
    a = a + 1;
    a = a * 5;

    // 语句作用域
    // cout << b << endl;  // 此时访问不到b
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    // cout << i << endl;
    return 0;
}