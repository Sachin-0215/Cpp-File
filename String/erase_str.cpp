#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "HellLo";
    s.erase(4,5);

    cout << s;
    return 0;
}