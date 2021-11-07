#include<iostream>
using namespace std;

int prime(int N)
{
    int i,count=0;
    for ( i = 1; i <= N; i++)
    {
        if (N%i==0){ count++;}
    }
    if (count==2){return true;}
    else{return false;}
}

int main()
{
    int M;
    cin>>M;
    cout<<prime(M);
    return 0;
}