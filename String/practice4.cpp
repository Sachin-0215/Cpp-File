// Checking a string is palindrome or not

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Holiday";
    string rev = "";

    int len = (int)str.length();

    rev.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }

    rev[len]='\0';
    if (str.compare(rev) == 0)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not A Palindrome";
    }

    return 0;
}