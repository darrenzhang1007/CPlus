/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 14:50:35
 * @LastEditTime: 2021-11-21 14:54:49
 * @LastEditors: Please set LastEditors
 * @Description: 数组和指针
 * @FilePath: /CPlus/shiqiyu_cplus/5.2_pointer_array.cpp
 * @url: https://www.yuque.com/darrenzhang/ort0r6/rnzx0w?inner=e1uyi
 */
#include <iostream>
using namespace std;

struct Student
{
    char name[4];
    int born;
    bool male;
};

int main()
{
    // Part One
    Student students[128];
    Student *p0 = &students[0];
    Student *p1 = &students[1];
    Student *p2 = &students[2];
    Student *p3 = &students[3];

    printf("p0 = %p\n", p0);
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);

    //the same behavior
    students[1].born = 2000;
    p1->born = 2000;

    // Part Two
    // You can consider an array name as a pointer
    printf("&students = %p\n", &students);
    printf("students = %p\n", students);
    printf("&students[0] = %p\n", &students[0]);

    Student *p = students;
    p[0].born = 2000;
    p[1].born = 2001;
    p[2].born = 2002;
    printf("students = %p\n", p);

    printf("students[0].born = %d\n", students[0].born);
    printf("students[1].born = %d\n", students[1].born);
    printf("students[2].born = %d\n", students[2].born);

    return 0;
}

// results
// p0 = 0x7ffd3e5b2f10
// p1 = 0x7ffd3e5b2f1c
// p2 = 0x7ffd3e5b2f28
// p3 = 0x7ffd3e5b2f34
// &students = 0x7ffd3e5b2f10
// students = 0x7ffd3e5b2f10
// &students[0] = 0x7ffd3e5b2f10
// students[0].born = 2000
// students[1].born = 2001
// students[2].born = 2002