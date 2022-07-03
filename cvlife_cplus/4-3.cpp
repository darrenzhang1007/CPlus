// 循环语句
#include <string>
#include <iostream>

using namespace std;

int main()
{
    // for 循环
    for (int i = 0; i < 10; i++)
    {
        cout << "i: " << i << endl;
    }
    // 范围for循环(c++11)
    string str = "cplusplus";
    for (char c : str)
    {
        cout << c << " ";
    }
    cout << endl;

    // while循环 - 先执行判断条件, 后执行循环体
    int i = 10;
    while (i > 0)
    {
        cout << "i: " << i << endl;
        i--; // 条件变更
    }

    // do while - 先执行循环体, 后执行判断条件
    int j = 9;
    do
    {
        j--;
        cout << "j: " << j << endl;
    } while (j < 10 && j > 0);

    return 0;
}