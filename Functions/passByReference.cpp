#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    cout << a << " " << b << endl;
    cout << "Before Swapping the value is : " << &a << " " << &b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << &x << " " << &y << endl;
    cout << "After Swapping the value is : " << x << " " << y << endl;
    return 0;
}