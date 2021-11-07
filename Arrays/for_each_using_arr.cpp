#include <iostream>
using namespace std;

int main()
{
    // int A[] = {2, 4, 6, 8, 10, 12};

    // int A[6] = {2, 4, 6};

    // float A[] = {2.5f, 25.6f, 9, 8, 7};

    // for (float x : A) // for each loop

    char A[] = {'A', 66, 'C', 68};

    // for (int x : A)

    for (char x : A)
    // for (auto x : A)
    {
        cout << x << endl;
    }
    return 0;
}