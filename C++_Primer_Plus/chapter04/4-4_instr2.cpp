/*************************************************************************
	> File Name: homework.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

int main() {
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: " << endl;
    cin.getline(name, ArSize);  // reads through newline
    cout << "Enter your favorite dessert: " << endl;
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    return 0;
}

