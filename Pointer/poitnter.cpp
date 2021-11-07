#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p = &a;

    cout << a << endl; // data variable of a
    cout << &a << endl; // p pointing to address of a 
    cout << p << endl;  // p pointing to address of a stored 
    cout << &p << endl;  // address of p
    cout << *p << endl;  // dereferencing pointer stored value of a

    return 0;
}