// 命名空间namespace 与 命名空间声明using
#include <iostream>
#include <string>
#include "6-1.hpp"

// using namespace std;
using namespace TEST_USING;

int main(int argc, char* argv[]) {

    // std: 标准库
    // TEST_USING::func();
    func();

    int a = 1000;
    cout << a << endl;
    cout << TEST_USING::a << endl;
}
