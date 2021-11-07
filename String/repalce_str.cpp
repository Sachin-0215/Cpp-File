#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Programming";
    str.replace(3, 6, "h");
    cout << str;
    return 0;
}