#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    // 成员变量（属性）
    string name;
    int age;
    string address;

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

int main()
{
    Student student; // 实例化对象
    student.set("darrenzhang", 10, "China");
    student.print();

    return 0;
}