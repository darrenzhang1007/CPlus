/*************************************************************************
	> File Name: homework.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

int main() {
    double *p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << "." << endl;

    p3 = p3 + 1;
    cout << "Now p3[0] is " << p3[0] << "." << endl;
    cout << "Now p3[1] is " << p3[1] << "." << endl;

    p3 = p3 - 1;
    cout << "Now p3[0] is " << p3[0] << "." << endl;
    cout << "Now p3[1] is " << p3[1] << "." << endl;

    delete[] p3;

    return 0;
}

