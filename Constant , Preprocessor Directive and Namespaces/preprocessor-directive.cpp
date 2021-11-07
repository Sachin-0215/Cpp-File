#include <iostream>
using namespace std;

// #define PI 3.1425
#define max(x, y) (x > y ? x : y)
#define msg(x) #x

#ifndef PI
    #define PI 3
#endif

int main()
{
    cout << PI << endl; // pi is not a variable
    cout << max(12, 5) << endl;
    cout << msg(HELLO) << endl;

    return 0;
}