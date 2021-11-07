#include<iostream>
using namespace std;

int Factorial(int N)
{
    int fact=1;
    for (int i = 1; i <= N; i++)
    {
        fact*=i;
    }
    return fact;    
}

int main()
{
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<"! is : "<<Factorial(n);
    return 0;
}