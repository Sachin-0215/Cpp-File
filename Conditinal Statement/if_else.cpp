#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    if (a++ < b)
    {
        cout << "Value a = " << a;
    }
    else
    {
        cout << "Value of b= " << ++b;
    }
    return 0;
}