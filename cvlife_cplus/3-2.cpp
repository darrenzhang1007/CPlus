// 算数运算符与赋值运算符
#include <string>
#include <iostream>

using namespace std;

int main(){
    // 算数运算符： + - × / %
    cout << 4 + 5 << endl;
    cout << 4 - 5 << endl;
    cout << 4 *5 << endl;
    cout << 4 / 5 << endl;
    cout << 4 % 5 << endl;
    cout << endl;

    // 赋值运算符： = += -= ×= /= %=
    int a;
    a = 10;
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a -= 4;
    cout << a << endl;
    a *= 3;
    cout << a << endl;
    a /= 3;
    cout << a << endl;
    a %= 1;
    cout << a << endl;
    cout << endl;

    // 自增自减运算符： ++ --
    a ++; // a += 1
    cout << a << endl;
    a --;  // a -= 1
    cout << a << endl;
    cout << endl;

    int b = 0;
    cout << "b: " << b << endl; // 0
    cout << b++ << endl; // 0
    cout << b << endl;   // 1
    cout << ++b << endl; // 2
    cout << b << endl;   // 2


    return 0;
}