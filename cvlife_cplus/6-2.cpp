// string的定义与初始化
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 可变长的字符序列
    string s1 = "abc";
    string s2(s1);
    string s3("cpp");
    string s4(6, 'c');

    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;

    // string对象的基本操作
    // 1. string的字符数量
    cout << "s1字符数量: " << s1.size() << endl;
    // 2. 判断字符串是否为空
    cout << "s1是否为空: " << s2.empty() << endl;
    // 3. 字符串元素访问
    cout << "s1的第三个字符: " << s1[2] << endl;
    for (int i = 0; i < s1.size(); i++)
        cout << "s1的第" << i << "个字符是：" << s1[i] << endl;
    // 4. 字符串拼接
    cout << s1 + s3 << endl;
    // 5. 字符串比较
    if (s1 == s2)
        cout << "s1 与 s2 相同" << endl;

    return 0;
}
