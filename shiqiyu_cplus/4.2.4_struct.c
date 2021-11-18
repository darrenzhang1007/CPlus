/*
 * @Author: DarrenZhang
 * @Date: 2021-11-19 00:23:41
 * @LastEditTime: 2021-11-19 00:23:42
 * @LastEditors: Please set LastEditors
 * @Description: 结构体
 * @FilePath: /CPlus/shiqiyu_cplus/4.2.4_struct.c
 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// typedef
// struct _Student{
//     char name[4];
//     int born;
//     bool male;
// } Student;

struct Student
{
    char name[4];
    int born;
    bool male;
};
int main()
{
    struct Student stu = {"Yu", 2000, true}; //initialization
    // strcpy(stu.name, "Yu");
    // stu.born = 2000;
    // stu.male = true;

    printf("Student %s, born in %d, gender %s\n",
           stu.name,
           stu.born,
           stu.male ? "male" : "female");

    struct Student students[100];
    students[50].born = 2002;

    return 0;
}