// Vector定义与初始化
#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1;
    vector<int> vec2(5);
    vector<int> vec3(5, 10);  // 5个元素，每个元素都为10
    vector<int> vec4 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec5(vec4.begin() + 1, vec4.end() + 5);
    vector<int> vec6(vec5);

    return 0;
}