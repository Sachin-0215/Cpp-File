#include <iostream>
using namespace std;

float fun()
{
    return 2.34f;
}

int main()
{
    double d = 12.3;
    int i = 9;

    auto x = 2 * 5.7 + 'a';
    auto y = 2 * d + i;

    cout << x << endl;
    cout << y << endl;

    auto z = fun();
    cout << z << endl;

    return 0;
}