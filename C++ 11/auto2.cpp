#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    float y = 90.5;
    decltype(y) z = 12.3;
    cout<<z;
    cout<<endl<<y;
    return 0;
}