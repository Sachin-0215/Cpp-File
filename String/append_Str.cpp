#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello";

    cout << str.capacity() << endl;
    str.append("! How are you all? Hope all are fine anksh");
    cout << str.capacity() << " " << str.length() << endl;

    cout << str << endl;
    return 0;
}