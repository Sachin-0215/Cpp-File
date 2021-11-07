#include <iostream>
using namespace std;

int max(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : (b > c ? b : c);
}
// This single function is acting as four overloaded function that is zero argument,one,two,three argument
int main()
{
    cout << "Greater Number is - " << max(10, 13, 61) << endl;
    cout << "Greater Number is - " << max(10, 50) << endl;
    cout << "Greater Number is - " << max(10) << endl;
    cout << "Greater Number is - " << max() << endl;

    return 0;
}