#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // char s[50] = "Hello World";

    char s[20];

    cout << "Enter a String - ";
    cin.getline(s, 100);

    cout << "Length = " << strlen(s) << endl;

    return 0;
}