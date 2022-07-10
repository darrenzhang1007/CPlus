#include <string>
#include <iostream>

using namespace std;

int mymax(int x, int y)
{
    cout << "call max int!" << endl;
    return (x > y) ? x : y;
}

int mymax(float x, float y)
{
    cout << "call max float!" << endl;
    return (x > y) ? x : y;
}

int mymax(char x, char y)
{
    cout << "call max char!" << endl;
    return (x > y) ? x : y;
}

int main()
{
    int a = 10, b = 100;
    cout << mymax(a, b) << endl;

    char c = 'a', d = 'b';
    cout << mymax(c, d) << endl;

    float e = 10.1f, f = 100.3f;
    cout << mymax(e, f) << endl;

    return 0;
}