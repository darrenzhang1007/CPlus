/*************************************************************************
	> File Name: homework.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>
#include <cstring>  // make string class available
#include <string>   // C-style string library

using namespace std;

int main() {
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    // assignment for string objects and character arrays
    str1 = str2;  // copy str2 to str1
    strcpy(charr1, charr2);  // copy str2 to str1

    // appending for string objects and character arrays
    str1 += " paste";  // add paste to end od str1
    strcat(charr1, " juice");  // add juice to end of charr1

    // finding the length of a string object and a C-sytle string
    int len1 = str1.size();  // obtain length of str1
    int len2 = strlen(charr1);   // obtain length of charr1

    cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
    cout << "The string " << charr1 << " contains " << len2 << " characters." << endl;

    return 0;
}


