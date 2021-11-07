#include <iostream>
using namespace std;

void funct()
{
    static int s = 10;
    // int s = 10;

    s++;
    cout << s << endl;
}

int main()
{
    funct();
    funct();
    funct();
    return 0;
}