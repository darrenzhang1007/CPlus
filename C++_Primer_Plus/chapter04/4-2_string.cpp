/*************************************************************************
    > File Name: 4-2_string.cpp
    > Author: DarrenZhang
    > Mail: darrenzhang1007@163.com
    > Created Time: 2021-05-28-20:18 PM
 ************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 1. C-style 字符串以空字符('\0')结尾，其ASCII码为0，用来标记字符串结尾
    // dog 和 cat都是char类型数组，第二个数组是字符串。
    char dog[8] = {'b', 'e', 'a', 'u', 'x', ' ', 'I', 'I'};   // not a string
    char cat[8] = {'f', 'a', 't', 'e', 's', 's', 'a', '\0'};  // a string
    char cow[8] = {'f', 'a', 't', 'e', '\0', 's', 'a', '\0'}; // a string

    for (int i = 0; i < strlen(cow); i++)
        cout << cow[i]; // fate, C-style 字符串以第一个空字符('\0')结尾

    // 2. ‘’ 与 “” 的区别
    char bird[11] = "Mr. Cheeps"; // the \0 is understood
    char fish[] = "Bubbles";      // let the compiler count number of fish's elements.

    char shirt_size = 'S'; // this is fine, 'S' 是字符常量
    // char shirt_size_ = "S"; // error, "S" 不是字符常量，表示的是字符S和\0组成的字符串。
    // 这样 "S" 表示的就是该字符串所在的内存位置。
    // 地址在C++中是一种独立类型，所以将内存地址赋值给char类型的shirt_size_,不合理，编译不通过

    // 3. 在数组中使用字符串
    // 字符串存储到数组中，最常用的方法有两种：将数组初始化为字符串常量（数组）；将键盘或文件读入到数组中

    // 3.1 将一个数组初始化为用双引号括起来的字符串
    const int Size = 15;
    char name1[Size];              // empty array
    char name2[Size] = "C++owboy"; // initialized array 8+1=9个字符足够存放到15个字符的数组中

    // 3.2 使用cin将输入字符串放置到数组中
    cout << "Howdy~ I'm " << name2 << "! What`s your name?" << endl;
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters." << endl; // strlen() 统计字符串长度
    cout << "And is stored in an array of " << sizeof(name1) << " bytes." << endl;           // 数组 name1 占用的内存空间大小
    cout << "Your initial is " << name1[0] << "." << endl;
    // strlen() 返回存储在数组中的字符串长度，而不是数组本身的长度，另外其只计算可见的字符，并不把空字符长度计算在内。
    // 如果 cosmic 是字符串，存储其的数组长度不能短于 strlen(cosmic) + 1

    name2[3] = '\0'; // set to null character
    cout << "Here are the first 3 characters of my name: " << name2 << endl;

    return 0;
}