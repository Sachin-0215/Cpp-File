#include <iostream>
using namespace std;

int & func(int &x)
{
    return x;
}

int main()
{
    int a = 10;
    func(a)=29;
    cout<<a;
    return 0;
}