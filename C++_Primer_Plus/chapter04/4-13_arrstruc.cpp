/*************************************************************************
    > File Name: homework.cpp
    > Author: DarrenZhang
    > Mail: darrenzhang1007@163.com
    > Created Time: 2021-03-26-4:12 PM
 ************************************************************************/
#include <iostream>

using namespace std;

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guests[2] =
        {
            {"Bambi", 0.5, 21.99},      // first structure in array
            {"Godzilla", 2000, 565.99}, // next structure in array
        };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << " have a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet." << endl;

    return 0;
}
