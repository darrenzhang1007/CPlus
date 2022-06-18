#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name = "Jone";
    int age = 24;
    int grade = 0;
    string address = "USA";

    // 成员函数
    void print()
    {
        cout << name << ", " << grade << ", " << address << endl;
    }
};

int main()
{
    // 自定义数据结构
    Student s2;
    s2.print();

    Student s1;
    s1.name = "DarrenZhang";
    s1.age = 26;
    s1.address = "beijing";

    cout << s1.name << endl;
    s1.print();



    return 0;
}