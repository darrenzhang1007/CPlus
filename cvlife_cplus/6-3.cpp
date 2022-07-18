// string的定义与初始化
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "cplusplus";
    // size_t len = s1.size();
    int len = s1.size(); // warning C4267: "初始化"： 从“size_t”转换到“int”，可能丢失数据
    // string 可以通过迭代器iterator进行访问

    // 元素访问
    cout << s1[0] << ", " << s1[len - 1] << endl;
    cout << s1.at(0) << ", " << s1.at(len - 1) << endl;
    cout << s1.front() << ", " << s1.back() << endl;

    for (int i = 0; i < len; i++)
    {
        cout << s1.at(i) << " ";
    }
    cout << endl;

    for (char c : s1)
    {
        cout << c << " ";
    }
    cout << endl;

    // 字符串修改
    // append push_back/pop_back insert erase replace swap
    s1.append(" is useful"); // append 增加字符串，和+功能相同
    // s1 += "is useful";
    cout << "s1 append: " << s1 << endl;

    s1.push_back('!'); // push_back在后面增加一个字符
    cout << "s1 push_back: " << s1 << endl;

    s1.pop_back(); // pop_back删除最后一个字符
    cout << "s1 pop_back: " << s1 << endl;

    s1.insert(0, "I think "); // insert
    cout << "s1 insert: " << s1 << endl;

    s1.erase(s1.begin());               // erase参数是迭代器
    cout << "s1 erase: " << s1 << endl; // 删除首元素

    s1.replace(0, 6, "you dont think"); // (位置， 字符数量) 将s1中的六个字符替换
    cout << "s1 replace: " << s1 << endl;

    string s2 = "cpp";
    s1.swap(s2);
    cout << "s1 swap: " << s1 << endl;

    // c_str: 转为char*
    string s3 = "cplusplus";
    const char *str = s3.c_str();

    // data: 获取string数据
    const char *str1 = s3.data();

    // 字符串查找，返回目标位置，如果找不到，返回-1
    // find find_first_of find_last_of
    int pos1 = s3.find('p');
    cout << "s3 find 'p' : " << pos1 << endl;

    int pos2 = s3.find_first_of('p');
    cout << "s3 find_first_of' : " << pos2 << endl;

    int pos3 = s3.find_last_of('p');
    cout << "s3 find_last_of 'p' : " << pos3 << endl;

    int pos4 = s3.find('e');
    cout << "s3 find 'e' : " << pos4 << endl;
    if (s3.find('l') != -1)
        cout << "fine l" << endl;

    // substr: 获取子串
    string sub1 = s3.substr(1, 4);
    cout << "s3 substr: " << sub1 << endl;

        return 0;
}