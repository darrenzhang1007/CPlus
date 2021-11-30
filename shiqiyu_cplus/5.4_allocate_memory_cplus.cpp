/*
 * @Author: DarrenZhang
 * @Date: 2021-11-21 15:36:42
 * @LastEditTime: 2021-11-21 15:40:32
 * @LastEditors: Please set LastEditors
 * @Description: C++ style to allcate and delete memory
 * @FilePath: /CPlus/shiqiyu_cplus/5.4_allocate_memory_cplus.cpp
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
    //allocate an int, default initializer (do nothing)
    int *p1 = new int;
    //allocate an int, initialized to 0
    int *p2 = new int();
    //allocate an int, initialized to 5
    int *p3 = new int(5);
    //allocate an int, initialized to 0
    int *p4 = new int{}; //C++11
    //allocate an int, initialized to 5
    int *p5 = new int{5}; //C++11

    //allocate a Student object, default initializer
    Student *ps1 = new Student;
    //allocate a Student object, initialize the members
    Student *ps2 = new Student{"Yu", 2020, 1}; //C++11

    //allocate 16 int, default initializer (do nothing)
    int *pa1 = new int[16];
    //allocate 16 int, zero initialized
    int *pa2 = new int[16]();
    //allocate 16 int, zero initialized
    int *pa3 = new int[16]{}; //C++11
    //allocate 16 int, the first 3 element are initialized to 1,2,3, the rest 0
    int *pa4 = new int[16]{1, 2, 3}; //C++11

    //allocate memory for 16 Student objects, default initializer
    Student *psa1 = new Student[16];
    //allocate memory for 16 Student objects, the first two are explicitly initialized
    Student *psa2 = new Student[16]{{"Li", 2000, 1}, {"Yu", 2001, 1}}; //C++11
    cout << psa2[1].name << endl;
    cout << psa2[1].born << endl;

    //deallocate memory
    delete p1;
    //deallocate memory
    delete ps1;

    //deallocate the memory of the array
    delete pa1;
    //deallocate the memory of the array
    delete[] pa2;

    //deallocate the memory of the array, and call the destructor of the first element
    delete psa1;
    //deallocate the memory of the array, and call the destructors of all the elements
    delete[] psa2;
    // 释放所有内存，只会调用第一个元素的析构函数，64行代码会调用所有元素的析构函数

    return 0;
}