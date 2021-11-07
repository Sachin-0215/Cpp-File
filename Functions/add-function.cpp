#include <iostream>
using namespace std;
void add(int *n);

int main()
{
    int num = 2;
    cout << "\n The Value of num before calling the function = " << num;
    add(&num);
    cout << "\n The Value of num after calling the function = " << num;
    return 0;
}
void add(int *n)
{
    *n = *n + 10;
    cout << "\n The value of num in the called function = " << *n;
}