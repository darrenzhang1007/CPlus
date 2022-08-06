// 其他关联容器
#include <iostream>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{
    // multimap multiset
    multimap<int, string> map1{{1, "cv"}, {2, "cpp"}, {3, "python"}};
    multiset<int> set1{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // unordered_map、 unordered_set
    unordered_map<int, string> map2{{4, "cv"}, {2, "CPP"}, {6, "python"}};
    unordered_set<int> set2{4, 2, 6, 1, 3, 5, 7};

    // // unordered_multimap、 unordered_multiset
    unordered_multimap<int, string> map3{{8, "CV"}, {2, "CPP"}, {8, "python"}};
    unordered_multiset<int> set3{8, 2, 4, 6, 1};

    return 0;
}