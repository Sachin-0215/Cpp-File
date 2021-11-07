#include<iostream>
using namespace std;

// Multiplication table
int main()
{
    int i=1,N;
    cin>>N;
    do
    {
        cout<<N<<" x "<<i<<" = "<<N*i<<endl;
        i++;
    } while (i<=10);
    
    return 0;
}