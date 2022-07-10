// 回调函数
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

typedef void (*callback)();

void funcA()
{
    sleep(1000);
    cout << "in function funA" << endl;
}

void funcB(callback func)
{
    func();
    while (1)
    {
        sleep(500);
        cout << "in function funcB" << endl;
    }
}

int main()
{
    funcB(funcA);
}