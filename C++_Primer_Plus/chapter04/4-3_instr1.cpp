/*************************************************************************
	> File Name: 4-3_instr1.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021年5月28日20:55 PM
 ************************************************************************/
#include <iostream>

using namespace std;

int main() {
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name: " << endl;
    cin >> name;
    cout << "Enter your favorite dessert: " << endl;
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << "." << endl;

    return 0;
}

