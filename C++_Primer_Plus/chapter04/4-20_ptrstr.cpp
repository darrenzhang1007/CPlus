/*************************************************************************
	> File Name: 4-20_ptrstr.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021/6/1 19:34
 ************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char flower[10] = "rose";
    cout << flower << "s are red" << endl;  // 当遇到字符的时候，从该字符开始打印，直到遇到空字符

    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;

    cout << animal << " and ";
    cout << bird << endl;

    cout << "Enter a kind of animal: ";
    cin >> animal;

    ps = animal;
    cout << ps << "!" << endl;
    cout << "Before using strcpy():" << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // get new storage
    strcpy(ps, animal);
    cout << "After using strcpy(): " << endl;
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    delete[] ps;

    return 0;
}

