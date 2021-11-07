#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Programming";
    string str2 = "Language";

    str.swap(str2);
    cout << str << endl;
    cout << str2 << endl;

    return 0;
}