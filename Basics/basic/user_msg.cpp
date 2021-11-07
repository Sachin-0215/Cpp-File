// Program to taking Name from the user and print it on the screen

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "May I Know Your Name : ";
    // cin >> name;  If you want to print all character of name which is entered by user is given below

    getline(cin, name);
    cout << "Hello Mr." << name << "!";
    return 0;
}