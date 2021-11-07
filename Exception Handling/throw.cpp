#include <iostream>
#include <string>
using namespace std;

class MyException : exception
{
};

int division(int a, int b)
{
    if (b == 0)
        throw 10;
    return a / b;
}

int main()
{
    int x = 10, y = 0, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by Zero " << endl;
    }
    catch (...)
    {
        cout << "All Catch" << endl;
    }
    cout << "Bye " << endl;

    return 0;
}