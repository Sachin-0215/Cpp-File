#include <iostream>
using namespace std;

int Factors(int N)
{
    int i;
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}

int main()
{
    int M;
    cin >> M;
    cout << Factors(M);

    return 0;
}