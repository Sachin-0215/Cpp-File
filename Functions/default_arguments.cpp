#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0) // c is optional now, Here c is default arguments
{
    return a + b + c;
}
int main()
{
    cout << sum(10, 5)<<endl;
    cout << sum(10, 5, 50)<<endl;

    return 0;
}