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
    Student student;
    Student student2("Zhangsan", 30, "Beijing");

    student.print();
    student2.print();
    return 0;
}