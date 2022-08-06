// set的使用
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    // set 对象创建
    set<string> set1;
    set<string> set2 {"study", "cpp"};
    set<string> set3 (set2);
    set<string> set4 {set2.begin(), set2.end()};

    // 增加key的排序规则（比较规则）为降序
    set<string, greater<string>> set5;
    set5.insert("cpp");
    set5.insert("python");
    set5.insert("java");

    // 常用操作
    if (!set5.empty())
        cout << "set5 is not empty" << endl;
    cout << "numer of cpp in set5 is: " << set5.count("cpp") << endl;
    cout << "set5 size: " << set5.size() << endl;

    set5.erase("cpp");

    auto it = set5.find("study");  // 查找不到，返回end对应的元素。

    set5.clear();
    cout << set5.empty();

    return 0;
}