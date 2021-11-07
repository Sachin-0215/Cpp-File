#include<iostream>
using namespace std;

// Print the sum of n natural number
int SUM_Natural_Number(int N)
{
    int sum=0;
    for (int i = 0; i <= N; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<SUM_Natural_Number(n);
    return 0;
}