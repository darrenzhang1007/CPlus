#include <iostream>

using namespace std;

int main()
{
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt << "; value of pt = " << pt << endl;

    return 0;
}

// Value of higgens = 5; Address of higgens = 0x7ffdd857ce1c
// Value of *pt = 5; value of pt = 0x7ffdd857ce1c