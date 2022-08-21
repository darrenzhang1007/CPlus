#pragma once
#include <string>
#include <string>

using namespace std;

class NewStudent
{
public:
    NewStudent();
    ~NewStudent();
    void print(string name);
    static void set_teacher_name(string name);

public:
    string name;
    string address;
    int age;
    static string teacher_name;
};