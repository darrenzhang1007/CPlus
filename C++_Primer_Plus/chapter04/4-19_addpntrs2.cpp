#include <iostream>

using namespace std;

int main()
{

    double *pn;
    double bubble = 3.2;
    pn = &bubble;
    cout << "pn address is " << pn << "; *pn's value is " << *pn;
    cout << "; pn[0]'s value is " << pn[0] << endl;

    double *pa;
    pa = new double[30];
    cout << "pa address is " << pa << "; pa's value is " << *pa << endl;
    double *pa1 = new double[30];
    cout << "pa1 address is " << pa1 << "; pa1's value is " << *pa1 << endl;

    char *pc;
    pc = new char;
    *pc = 'S';
    cout << "pc address is " << pc << "; pc's value is " << *pc << endl;

    int *pt = new int;
    *pt = 5;
    cout << "pt address is " << pt << "; pt's value is " << *pt << endl;

    int tacos[10] = {5, 5, 4, 2, 4, 1, 4, 5, 7, 9};
    cout << "tacos array's length " << sizeof(tacos) << endl;
    int * ps = tacos;
    cout << ps << endl;  // 0x61fec8
    ps += 1;
    cout << ps << endl;  // ox61fecc

    int *pe = &tacos[9];
    pe = pe - 1;
    int diff = pe - ps;
    cout << pe << endl;
    cout << ps << endl;
    cout << diff << endl;

    int *pu = new int[10];
    *pu = 5;
    cout << *pu << endl;
    pu[0] = 6;
    cout << *pu << endl;
    pu[9] = 44;
    int coats[10];
    *(coats + 4) = 12;
    cout << *(coats + 4) << endl;

    delete pt;
    delete pc;
    delete[] pa;
    delete[] pa1;
    return 0;
}