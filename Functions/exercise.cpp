// WAP for linear search

#include <iostream>
using namespace std;

int Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int A[] = {2, 3, 4, 5, 88, 6, 4};
    int k;
    cout << "Enter an Element to be Searched : ";
    cin >> k;
    int index = Search(A, 7, k);

    cout << "Element Found at index : " << index << endl;
    return 0;
}