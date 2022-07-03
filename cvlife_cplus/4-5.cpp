// 异常处理
#include <string>
#include <iostream>
#include <exception>

using namespace std;

// 自定义异常
struct MyException : public std::exception
{
    const char *what() const throw()
    {
        return "C++ MyException";
    }
};

int main()
{
    // 异常处理 - try、catch、throw
    int price;
    try
    {
        cout << "please input price: ";
        cin >> price;
        if (price <= 0)
        {
            throw runtime_error("price cannot be negative");
        }
    }
    catch (runtime_error e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << "please input price: ";
        cin >> price;
        if (price <= 0)
        {
            throw MyException();
        };
    }
    catch (MyException &e)
    {
        cout << "MyException caught: " << e.what() << endl;
    }
    catch (exception &e)
    {
        // 其他错误
    }

    try
    {
        cout << "please input price: ";
        cin >> price;
        if (price <= 0)
        {
            throw MyException();
        };
    }
    catch (...)
    {
        // 捕获所有异常 - 不利于异常处理，但有利于程序稳定性
        cout << "catch all exceptions" << endl;
    }
    return 0;
}