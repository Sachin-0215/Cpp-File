#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            if (b > c)
            {
                cout << a + b << endl;
            }
            else
            {
                cout << a + c << endl;
            }
        }
        if (b > a && b > c)
        {
            if (a > c)
                cout << a + b << endl;

            else
                cout << b + c << endl;
        }

        if (c > a && c > b)
        {
            if (a > b)
            {
                cout << c + a << endl;
            }
            else
            {
                cout << c + b << endl;
            }
        }
    }
    return 0;
}