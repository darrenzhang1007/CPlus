// 生命周期
#include <iostream>

using namespace std;

class Student
{
public:
    Student()
    {
        cout << "construct empty Student object!" << endl;
    }
    Student(int x)
    {
        cout << "construct Student object with int x=" << x << endl;
    }
    Student(string s)
    {
        cout << "construct Student object with string s=" << s << endl;
    }
    Student(float f)
    {
        cout << "construct Student object with float f=" << f << endl;
    }

    ~Student()
    {
        cout << "destruct Student object!" << endl;
    }
};

// 全局
Student t1;

int main()
{
    cout << "Enter main function" << endl;
    int a = 1;
    if (a > 0)
    {
        cout << "enter create t2!" << endl;
        // 局部变量
        Student t2(10);
        cout << "leave t2 region!" << endl;
    }
    // 静态变量
    static Student t3('c');

    // 不进入作用域，静态对象不会创建
    if (a < 0)
    {
        cout << "before create t4" << endl;
        static Student t4("app");
        cout << "after create t4" << endl;
    }

    Student *t5 = new Student(3.14f);  // 动态创建的对象需要自己释放内存
    delete t5; // 不主动释放的话，不会调用析构函数;

    cout << "Exit main function!" << endl;

    return 0;
}