// 类的构造与析构函数
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Student
{
public:
    // 成员变量（属性）
    string name;
    int age;
    string address;

    // 构造函数
    Student()
    {
        cout << "Constructor 1!" << endl;
        name = "darrenzhang";
        age = 10;
        address = "China";
    }

    Student(string s_name, int s_age, string s_address)
    {
        cout << "Constructor 2!" << endl;
        name = s_name;
        age = s_age;
        address = s_address;
    }

    // 析构函数
    ~Student()
    {
        cout << "Destructor!" << endl;
    }

    // 成员函数（方法）
    void set(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }

    void print()
    {
        cout << name << " " << age << " " << address << endl;
    }
};

int main(int argc, char **argv)
{
    // 堆区
    int *p = new int(5);
    delete p; // 指针p 变为野指针，后续不可在调用它
    cout << *p << endl;
    p = nullptr; // C++11 关键字，之前版本使用NULL
    // cout << *p << endl;  // 会报错

    int *p1 = new int[10];
    delete[] p1;
    p1 = nullptr;

    Student *ps = new Student("Zhangsan", 30, "Beijing");
    delete ps;  // 调用析构函数
    ps = nullptr;

    Student *ps1 = new Student[10];
    cout << ps1[0].name << ", " << ps1[0].age << ", " << ps1[0].address << endl;
    cout << ps1[9].name << ", " << ps1[9].age << ", " << ps1[9].address << endl;
    delete[] ps1;
    ps1 = nullptr;

    return 0;
}