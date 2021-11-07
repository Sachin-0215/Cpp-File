#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter Age : ";
    cin>>age;
    if(age>=12 || age <=50)
    {
        cout<<"Eligble for Offer";
    }
    else
    {
        cout<<"Not Eligble for Offer";
    }
     return 0;
}