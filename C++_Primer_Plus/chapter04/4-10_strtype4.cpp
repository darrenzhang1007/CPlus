/*************************************************************************
	> File Name: homework.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char charr[20];
    string str;

    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;

    cout << "Enter a line of text:" << endl;
    cin.getline(charr, 20);  // indicate maximum length
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:" << endl;
    getline(cin, str);  // cin now an argument; no length specifier
    cout << "Your entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input " << str.size() << endl;

    return 0;
}

