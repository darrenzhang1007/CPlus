#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // 基本数据类型
    // 1. 整型 - short/int/long/long long
    short a = 1;
    cout << "short 占用内存空间大小" << sizeof(a) << endl; // 2个字节，1个字节8位（bits）
    // unsigned short int -> [-32768, 32767]
    // signed short int -> [0, 65535]
    int b = 2;
    cout << "short 占用内存空间大小" << sizeof(b) << endl; // 4个字节，1个字节8位（bits）

    int maxint8 = INT8_MAX;
    int minint8 = INT8_MIN;
    int maxint16 = INT16_MAX;
    int minint16 = INT16_MIN;
    int maxint32 = INT32_MAX;
    int minint32 = INT32_MIN;
    cout << "maxint8: " << maxint8 << endl;   // 127
    cout << "minint8: " << minint8 << endl;   // -128
    cout << "maxint16: " << maxint16 << endl; // 32767
    cout << "minint16: " << minint16 << endl; // -32768
    cout << "maxint32: " << maxint32 << endl; // 2147483647
    cout << "minint32: " << minint32 << endl; // -2147483648

    long c = 2;
    cout << "long 占用内存空间大小" << sizeof(c) << endl; // 8个字节 in ubuntu, 4字节 in window
    long long d = 2;
    cout << "long long 占用内存空间大小" << sizeof(d) << endl; // 8个字节

    // 无符号数
    unsigned int e = -11;
    int f = -11;
    cout << "无符号整数-11的真实打印值: " << e << endl; // 无符号整数-11的真实打印值: 4294967285
    cout << "默认是有符号整数:" << f << endl;           // 默认是有符号整数:-11

    // 2.浮点型 - float 小数
    float pi = 3.1415926535;
    cout << "浮点类型占用的内存空间大小为：" << sizeof(pi) << endl; // 4
    cout << "pi is " << pi << endl;                                 // 3.14159，会被截断，超出可表示范围
    float pii = 3.1415926535f;
    cout << "pii is " << pii << endl; // 3.14159，超出有效精度会被截断，超出可表示范围

    // 浮点型 - double
    double pi_double = 3.1415926535;
    cout << "浮点型double占用的内存空间为: " << sizeof(pi_double) << endl; // 8
    cout << "pi_double is " << pi_double << endl;                          // pi_double is 3.14159
    // double类型的可表示范围（精度）会比float高，但是打印出的值还是会被截断，
    // 我们可以手动设置精度
    cout.setf(ios::fixed);
    cout << setprecision(7) << pi << endl;
    cout << setprecision(15) << pi_double << endl;

    // 3. 字符型 - char
    char g = 'a';
    cout << "char 类型占用的内存空间为：" << sizeof(g) << endl; // 1
    cout << "g is " << g << endl;
    // char g_2; // 只定义未赋值
    // cout << "g_2 is " << g_2 << endl; // 再ubuntu中，输出值是随机值
    // char g_3 = 'as'; // 会有warning
    // cout << "g_3 is " << g_3 << endl; // g_3 为 s，只会保留最后一个字符

    // 字符对应ASCII码
    char h = 97;
    cout << "h: " << h << endl;
    cout << "int(g):" << int(g) << endl;

    // 转义字符 - /t /n //
    cout << "这里有个换行：" << '\n' << endl;

    // 4. 字符串
    // C 风格字符串
    char str1[] = "hello world"; // 通过字符数组
    cout << "C 风格数组 " << str1 << ", 内存占用为 " << sizeof(str1) << endl; // 11 个字符 + \0
    // C++ 风格字符串
    string str = "hello world"; // 通过string标准库
    cout << "C++ 风格数组 " << str << endl;
    cout << "string内存占用为 " << sizeof(string) << endl; // string类的大小为32字节
    cout << "str内存大小占用为 " << str.size() << endl; // str的内存占用11

    // 5. bool类型 1 -> True; 0 -> False
    bool m = true;  // 1
    bool n = false; // 0
    bool k = 100;   // 1
    cout << "m is " << m << "; n is " << n << "; k is " << k << endl;

    return 0;
}