// Array Declartaion

#include <iostream>
using namespace std;

int main()
{
    // int A[5];// give garbage value without initalising

    // int A[5]={3,4,10,12,5};

    // int A[5] = {24, 23};

    // int A[5]={0};

    // int A[6]={5,4,6,8,9,7};

    int A[]={5,4,6,8,9,7};


    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "]"
             << " = " << A[i] << endl;
    }
    return 0;
}