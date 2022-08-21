// 静态成员访问
#include <iostream>
#include <string>
#include "NewStudent.h"

using namespace std;

int main()
{
    cout << NewStudent::teacher_name << endl;
    NewStudent::set_teacher_name("Teacher wang");
    cout << NewStudent::teacher_name << endl;

    NewStudent s1;
    cout << s1.teacher_name << endl;

    NewStudent s2;
    s2.set_teacher_name("Teacher li");
    cout << s1.teacher_name << endl;
    cout << s2.teacher_name << endl;

    return 0;
}
