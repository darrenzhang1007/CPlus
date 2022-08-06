// 关联容器介绍
// <> 系统或者标准库的头文件， ""自定义的头文件
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    // pair 数据类型
    pair<string, string> p1{"cpp", "Cplusplus"};
    cout << "pair p1 value is: " << p1.first << " " << p1.second << endl;

    map<string, string> map1;
    // 向map1容器中添加数据
    map1["cplusplus"] = "cpp";
    map1["Cplusplus"] = "Cplusplus";
    map1["students"] = "students";
    cout << "key students value is: " << map1["students"] << endl;

    return 0;
}