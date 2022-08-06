// map的使用
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // 5种map对象的创建
    map<string, string> map1;
    map<string, string> map2{{"study", "cpp"}};
    map<string, string> map3{
        make_pair("study", "cpp"),
        make_pair("good", "study")};
    map<string, string> map4(map3);                     // 使用map3初始化map4对象
    map<string, string> map5(map1.begin(), map1.end()); // 左闭右开，不包括end元素

    // 增加key值的排序规则（比较规则）为降序，默认为升序
    map<string, string, greater<string>> map6;
    map6["Cplusplus"] = "cpp";
    map6["stduy"] = "cpp";
    map6["cpp"] = "cpp";

    // 常用操作
    if (!map6.empty())
        cout << "map6 is not empty" << endl;
    // 统计某个key出现的个数
    cout << "map6 cpp nums is): " << map6.count("cpp") << endl;
    cout << "map6 size: " << map6.size() << endl;

    map6.erase("cpp"); // 删除某个key值
    pair<string, string> p1{"language", "python"};
    map6.insert(p1);

    map<string, string>::iterator it = map6.find("study");
    map6.clear();

    return 0;
}