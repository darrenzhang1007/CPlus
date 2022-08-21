// 访问控制
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// 基类（父类）
class Person
{
public:
    string name;

protected:
    int age;

private:
    string hobby;

public:
    void set_hobby(string hobby)
    {
        hobby = hobby;
    }
    string get_hobby()
    {
        return hobby;
    }
};

// 派生类（子类）
class Student : public Person
{
public:
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
    int get_age()
    {
        return age;
    }

protected:
    string school_name;

private:
    string address;
};

int main(int argc, char **argv)
{
    Student s2("darrenzhang", 25, "China");
    cout << s2.name << endl;
    return 0;
}