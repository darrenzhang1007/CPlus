// vector的使用
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 获取size和capacity
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "vec size " << v.size() << endl;
    cout << "vec capacity " << v.capacity() << endl;

    // 添加元素
    v.push_back(6); // 末尾添加6
    cout << "vec size " << v.size() << endl;
    cout << "vec capacity " << v.capacity() << endl;

    // 删除元素
    v.pop_back(); // 开头删除

    // 判断空
    if (!v.empty())
    {
        cout << "v is not empty" << endl;
    }

    // 调整容量
    v.reserve(20);
    cout << "vec size " << v.size() << endl;
    cout << "vec capacity " << v.capacity() << endl;

    // 元素删除， 注意元素删除会导致迭代器失效
    v.erase(v.begin());
    v.erase(v.begin(), v.begin() + 2); // 删除范围：[begin, begin+2)

    // 清空v
    v.clear();

    return 0;
}