#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[10] = "Sachin";

    char h[] = "Sachin";

    // Initialising the array of character as
    char c[] = {'H', 'E', 'L', 'L', 'O', '\0', 'p', 'x'};

    char A[] = {65, 66, 67, 68, 0};

    // char *ptr = "Hii";  ISO C++ forbids converting a string constant to 'char*'

    string p = "Programming"; // string class

    cout << s << endl;
    cout << h << endl;
    cout << c << endl;
    cout << A << endl;
    cout << p << endl;

    return 0;
}