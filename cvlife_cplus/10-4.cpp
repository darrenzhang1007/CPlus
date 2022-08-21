// 有元函数
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

    // 声明为有元函数
    friend void print_func(const Student &s);
    // 将School类声明为Student的友元类
    friend class School;

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

// 有元函数
void print_func(const Student &s)
{
    // 引用传参可能改变值，所以用const修饰
    cout << s.name << ", " << s.age << ", " << s.address << endl;
}

// 有元类
class School
{
public:
    void print_student(const Student &s)
    {
        cout << s.name << ", " << s.age << ", " << s.address << endl;
    }

private:
    string sc_name;
};

int main(int argc, char **argv)
{
    // Student s1
    Student s2("darrenzhang", 5, "beijing");
    print_func(s2);

    School sc;
    sc.print_student(s2);

    return 0;
}