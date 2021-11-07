#include <iostream>
using namespace std;

float add(float x, float y)
{
    float z;
    z = x + y;
    return z;
}

int main()
{
    float x = 2.3f, y = 7.9f, z; // same variable also allowed
    z = add(x, y);

    cout<<"Sum of "<<x<<" and "<<y<<" is "<<z<<endl;
    return 0;
}