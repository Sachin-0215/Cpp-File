#include<iostream>
#include<array>
using namespace std;

int main()
{
    // int basic[3] = {2,3,4}; basic initialization and declaration of array
    array<int,4>a = {1,23,3,5};

    int size=a.size();

    for(int element:a)
        cout<<element<<endl;

    // Array STL operation
    cout<<"Element at 2nd index -> "<<a.at(2)<<endl;
    cout<<"Empty or not -> "<<a.empty();
    cout<<"\nfIRST element -> "<<a.front()<<endl;
    cout<<"Last element -> "<<a.back()<<endl;


    return 0;
}