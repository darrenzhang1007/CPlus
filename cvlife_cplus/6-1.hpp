#pragma once

#include <iostream>

using namespace std;
// warning: 在hpp中，不要使用using namespace，会进行传播

namespace TEST_USING
{
    int a = 10;
    void func()
    {
        // std::cout << "hello namespace" << std::endl;
        cout << "hello namespace" << endl;
    }
}