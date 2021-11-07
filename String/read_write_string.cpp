#include <iostream>
using namespace std;

int main()
{
    char s[100];
    char s2[100];

    cout << "Enter Your Name : ";
    cin.get(s, 100);
    // cin.getline(s, 100);

    cout << "Welcome " << s << endl;

    cin.ignore();

    cout << "Enter Your Name Again : ";
    // cin.get(s, 100);
    cin.getline(s2, 100);

    cout << "Welcome " << s2 << endl;

    return 0;
}