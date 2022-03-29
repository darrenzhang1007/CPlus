/***
 * @Author       : DarrenZhang
 * @Date         : 2022-03-29 21:03:05
 * @LastEditTime : 2022-03-29 21:06:48
 * @LastEditors  : DarrenZhang
 * @Description  :
 * @FilePath     : /CPlus/C++_Primer_Plus/chapter04/4-11_structur.cpp
 */
#include <iostream>

using namespace std;

// structure declaration
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest =
    {
        "Glorious Gloria", // name value
        1.88,              // volume value
        29.99              // price value
    };  // guest is a structure variable of type inflatable

    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    }; // pal is a second variable of type inflatable

    cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!" << endl;

    cout << "You can have both for $" << guest.price + pal.price << "!" << endl;

    return 0;
}