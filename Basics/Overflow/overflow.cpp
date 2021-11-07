#include <iostream>
using namespace std;

int main()
{
    // char x=127;
    // char x=127;  // overflow value is -128
    // char x=-128;
    // x--;

    int x = INT_MAX;
    x++;
    cout << (int)x << endl;
    return 0;
}