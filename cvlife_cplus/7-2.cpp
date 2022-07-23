// 迭代器的使用
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 迭代器用于遍历元素
    vector<int> vec1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (vector<int>::iterator it = vec1.begin(); it != vec1.end(); ++it)
    {
        cout << *it << " ";
        *it *= 10;
    }
    cout << endl;

    for (vector<int>::iterator it = vec1.begin(); it != end(vec1); it++)
    {
        cout << *it << " ";
        *it *= 10;
    }
    cout << endl;

    // 定义迭代器iterator
    auto it1 = vec1.begin();
    vector<int>::iterator it2 = vec1.begin();

    vector<int> vec5(vec1.begin() + 1, vec1.end() + 5);
    for (vector<int>::iterator it = begin(vec5); it != end(vec5); it++)
        {
            cout << *it << " ";
            vec5.erase(it);
        }
        cout << endl;

    return 0;
}