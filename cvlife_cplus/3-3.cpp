// 逻辑与关系运算符
#include <string>
#include <iostream>

using namespace std;

int main()
{
    // 逻辑运算符
    // !: 逻辑非; &&: 逻辑与; ||: 逻辑或;
    // 或: 有1为1, 全0为0; 与: 全1为1, 有0为0
    int a = 9;
    int b = -2;
    if (a > 0 && b > 0)
    {
        cout << "a and b > 0 " << endl;
    }

    if (a > 0 || b > 0)
    {
        cout << " a or b > 0" << endl;
    }

    bool c = false;
    if (!c)
    {
        cout << "c is false" << endl;
    }

    // 关系运算符
    //  > >= < <= == !=
    cout << "a > b: " << (a > b) << endl;   // 1
    cout << "a >= b: " << (a >= b) << endl; // 1
    cout << "a < b: " << (a < b) << endl;   // 0
    cout << "a <= b: " << (a <= b) << endl; // 0
    cout << "a == b: " << (a == b) << endl; // 0
    cout << "a != b: " << (a != b) << endl; // 1
    cout << endl;

    // ==: 关系运算符 vs. =:赋值运算符
    if (a == 1)
    {
        cout << "a = 1" << endl;
    }
    for (int i = 0; i == 1; i++)
        // 只有当i==1为真的时候，才会执行循环
        cout << i << endl;

    for (int i = 0; i = 1; i++)
        // i=1为赋值语句，此时i=1,为true，会导致程序无限循环
        cout << i << endl;

    return 0;
}