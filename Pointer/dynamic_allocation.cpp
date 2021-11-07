#include <iostream>
using namespace std;

int main()
{
    int *p = new int[5]; // Array of size 5 will be created in heap
    p[0] = 12;           // array of p at index 0 is 12
    p[1] = 13;

    // if we want to access element

    cout << p[1] << endl;

    // if you dont wat p then assign it null firstly

    delete[] p;
    p = nullptr;

    return 0;
}