#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 2 Nos.: ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Division By Zero";
    }
    else
    {
        c = a / b;
        cout << c << endl;
    }

    return 0;
}