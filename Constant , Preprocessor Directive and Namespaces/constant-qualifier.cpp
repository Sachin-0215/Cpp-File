#include <iostream>
using namespace std;

int main()
{
    // const int x = 10;
    // x = 30;//  cannot modified
    int x = 10;
    // const int *ptr = &x;
    // int const *ptr = &x;

    // ++*ptr; //can't modified
    // int *const ptr = &x;

    const int *const ptr = &x;

    // ++*ptr;
    int y = 20;
    // ptr = &y;
    cout << *ptr << " " << x << endl;

    return 0;
}