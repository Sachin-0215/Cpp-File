#include<iostream>
using namespace std;

int main()
{
    for(int i=0,j=4;i<j;i++,j--)
    {
        cout<<"Hello"<<endl;    
    }
    
    // Here i<j first time : i=0,j=4; Hello printed
    // Here i<j second time : i=1,j=3; Hello printed
    // Here i<j third time : i=2,j=3; Hello not printed
     return 0;
}