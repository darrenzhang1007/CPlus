// 函数中的const修饰符与命令行参数
#include <string>
#include <iostream>

using namespace std;

// const修饰src，保护原字符串不被修改，若修改src则编译出错
// void fun(const char *src, char *dst)
// {
//     strcpy_s(dst, 10, src);
// }

class A
{
private:
    int i;

public:
    A() { i = 0; }
    int &get()
    {
        return i;
    }

    const int &get1()
    {
        return i;
    }
};

int main(int argc, char **argv)
{
    char str1[20] = "cplusplus";
    char str2[20];

    // fun(str1, str2);

    cout << str1 << endl;
    cout << str2 << endl;

    A a;
    cout << a.get() << endl;

    a.get() = 10;
    cout << a.get() << endl;

    // a.get1() = 10;  // const 无法被修改

    // 命令行参数
    cout << "argc: " << argc << endl;
    if (argc != 2)
    {
        cout << " parameters number is wrong, not 1!" << endl;
        return -1;
    }

    int b = atoi(argv[1]);
    cout << b << endl;

    return 0;
}