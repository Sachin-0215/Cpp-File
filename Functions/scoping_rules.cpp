#include <iostream>
using namespace std;

int x = 19;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << endl;
    }
    cout << x << endl;

    // Accessing global Variable use scope resolution operator ::

    cout<<::x<<endl;
    return 0;
}