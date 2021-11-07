#include<iostream>
using namespace std;

int main()
{
    int A[5] = {2,4,6,8,10};
    int *p=A,*q=&A[4];

    cout<<*p<<endl; //2
    cout<<endl;

    p++;
    cout<<*p<<endl; //4
    cout<<endl;

    p--;
    cout<<*p<<endl; //2
    cout<<endl;
    cout<<p<<endl; // address of Index A
    cout<<p+2<<endl; // ptr move forward and pointing to it adddress of A
    cout<<endl;
    cout<<*p<<endl; 
    cout<<*(p+2)<<endl;
    cout<<endl;
    cout<<q-p<<endl;
    cout<<p-q<<endl;




     return 0;
}