#include<iostream>
using namespace std;

int main()
{
    // Multiplication table
    int N,i=0;
    cin>>N;
    while (i<=10)
    {
        cout<<N<<" x "<<i<<" =  "<<N*i<<endl;
        i++;
    }
    
    return 0;
}