#include <iostream>
using namespace std;

int main()
{
    // Types of Loops

    // While Loop
    int a = 0;

    while (a < 10)
    {
        cout << a << ". "
             << "Hello" << endl;
        a++;
    }

    // Do While Loop
    int b = 0;

    do
    {
        cout << b << ". "
             << "Hii" << endl;
        b++;
    } while (b < 5);

    // For Loop
    for (int i = 0; i < 10; i++)
    {
        cout << i << ". "
             << "For loop" << endl;
    }

    // For each loop
    // for loop is used for accessing all elements of array
    int A[3] = {5, 8, 9};
    for (int x : A)
    {
        cout << x << endl;
    }


    return 0;
}