#include <iostream>

using namespace std;

enum spectrum {red, orange, yellow, green};

int main()
{
    spectrum band;
    // band = yellow;
    // cout << band << endl;

    // band = orange + green;
    // cout << band << endl;

    // ++band;
    // cout << band << endl;
    // int color = orange;
    // band = 3;
    // color = 3 + red;
    band = spectrum(2);
    cout << band << endl;

}