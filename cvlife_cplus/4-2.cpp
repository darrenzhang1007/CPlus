// 选择结构if与switch
#include <string>
#include <iostream>

using namespace std;

int main()
{
    // 程序流程结构
    // 顺序结构/ 条件结构(选择结构) 循环结构

    // 选择结构  if-else switch-case
    // if语句
    int result = 0;
    if (result < 6)
    {
        cout << result << endl;
        result += 6;
        cout << result << endl;
    }
    // if-else
    if (result > 6)
    {
        cout << "result的值大于6" << endl;
    }
    else
    {
        cout << "result的值小于6" << endl;
    }

    // 嵌套if语句
    if (result > 6)
    {
        cout << "result的值大于6" << endl;
    }
    else if (result > 0)
    {
        cout << "result的值大于0" << endl;
    }
    else
    {
        cout << "result的值小于0" << endl;
    }

    if (result > 0)
    {
        if (result < 6)
        {
            cout << "result大于0小于6" << endl;
        }
    }

    // switch语句
    /*
    switch(表达式) // 表达式的内容只能是字符型或者整数
    {
        case结果一: 执行语句1; break;
        case结果二: 执行语句2; break;
        case结果三: 执行语句3; break;
        ...
        default: 执行语句; break;

    }
    */
    string str = "I like study cplusplus";
    int num = 0; // 保存元音字母的个数
    for (char c : str)
    {
        switch (c)
        {
        case 'a':
            num++;
            break;
        case 'e':
            num++;
            break;
        case 'i':
            num++;
            break;
        case 'o':
            num++;
            break;
        case 'u':
            num++;
            break;

        default:
            cout << c << " 不是元音字母" << endl;
            break;
        }
    }
    cout << "元音字母的个数: " << num << endl;

    return 0;
} //