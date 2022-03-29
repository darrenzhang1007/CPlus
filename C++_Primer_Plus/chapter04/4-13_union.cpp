#include <iostream>
using namespace std;

union one4all
{
    /* data */
    int int_val;
    long long_val;
    double double_val;
};

struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    } id_val;
};


int main()
{
    one4all pail;
    pail.int_val = 15;
    cout << pail.int_val << endl;

    pail.double_val = 1.38;
    cout << pail.int_val << endl;
    cout << pail.double_val << endl;

    widget prize;
    if (prize.type == 1)
        cin >> prize.id_val.id_num;
    else
        cin >> prize.id_val.id_char;
}