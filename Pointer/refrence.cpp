#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int &y = x;  // Refrence variable doesn't consume any memory
    // int &y;  // gives an error because reference not initialised
    cout << x << endl;
    y++;
    x++;
    cout << x << endl;
    cout << &x << endl;
    cout << &y << endl;
    return 0;
}