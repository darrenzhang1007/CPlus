/*************************************************************************
	> File Name: homework.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int updates = 6;
    int *p_updates;  // 生明一个整型指针，指针变量名字叫p_updates
    p_updates = &updates;  // 指针里面永远是地址，assign address of int to pointer

    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    cout << "Address: updates = " << &updates;
    cout << ", *p_updates = " << p_updates << endl;

    *p_updates = *p_updates + 1;
    cout << "Now, updates = " << updates << endl;

    return 0;
}

// Values: updates = 6, *p_updates = 6
// Address: updates = 0x7ffcea931a8c, *p_updates = 0x7ffcea931a8c
// Now, updates = 7