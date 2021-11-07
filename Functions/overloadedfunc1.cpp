#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}
float sum(float x, float y)
{
    return x + y;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}

int main()
{
    cout << "Sum is : " << sum(52, 78) << endl;
    cout << "Sum is : " << sum(2.5f, 8.0f) << endl;
    cout << "Sum is : " << sum(20, 8, 100) << endl;

    return 0;
}