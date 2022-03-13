/*************************************************************************
	> File Name: homework.cpp
	> Author: DarrenZhang
	> Mail: darrenzhang1007@163.com
	> Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

// structure declaration
struct inflatable {
    char name[20];
    float volume;
    double price;
};

int main() {
    inflatable guest =
            {
                    "Glorious Gloria", // name value
                    1.88,             // volume value
                    29.99               // price value
            };  // guest is a structure variable of type inflatable

    inflatable pal =
            {
                    "Audacious Arthur",
                    3.12,
                    32.99
            };  // pal is a second variable of type inflatable

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!" << endl;

    cout << "You can have both for $";
    cout << guest.price + pal.price << "!" << endl;

    return 0;
}