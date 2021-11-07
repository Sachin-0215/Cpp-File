#include<iostream>
using namespace std;

int main()
{
    int roll;
    cout<<"Enter Your Roll Number : ";
    cin>>roll;

    if(roll<1)
    {
        cout<<"Invalid Roll Number";
    }
    else
    {
        cout<<"Valid Roll Number";
    }
     return 0;
}