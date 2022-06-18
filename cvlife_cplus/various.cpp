// 变量 常量 标识符
#include <iostream>
#include <string>

using namespace std;
#define PI 3.1415926535

int main(){
    // 变量的作用：给一段指定的内存空间起名字，方便操作这段内存
    // 语法：数据类型 变量名 = 初始值
    int a = 1;
    cout << "a在内存中的地址为 " << &a << endl;
    a = 2;
    cout << "a: " << a << endl;

    // 常量作用：用于记录程序中不可更改的数据
    // #define方式定义
    cout << "PI is " << PI << endl;
    // PI = 3.3; // 常量是不可以被修改

    // const修饰符修饰变量定义
    // 语法：const：数据类型 常量名 = 常量值
    const float pi = 3.1415926535;
    cout << "pi is " << pi << endl;
    // pi = 32.4242; // 常量不可以被修改

    // 关键字与标识命名规则
    // 01. C++的关键字不能当作标识符(变量or常量名）使用
    // int int = 1; // error
    // 02. 标识符只能以下划线，数字，字母组成
    // int a& = 3;
    // 03. 标识符不能以数字开头
    // int 3d = 3;
    // 04. 标识符字母区分大小写，可以从标识符对应的内存地址可以看出。
    int ABC = 4;
    int abc = 5;
    cout << "ABC's address in memory is " << &ABC << endl; // 0x7ffd28ecbd5c
    cout << "abc's address in memory is " << &abc << endl; // 0x7ffd28ecbd60

    // 05. 取名要见名知意，
    return 0;
}