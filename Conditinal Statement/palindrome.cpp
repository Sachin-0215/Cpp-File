// WAP which takes an integer from the user and that integer is reversed.
// if the reversed integer is equal to the integer entered by user then, that is palindrome if not that is not palindrome.

#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;

    cout << "Enter a Positive Number : ";
    cin >> num;

    n = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "The reverse Number is : " << rev << endl;
    if (n == rev)
    {
        cout << "The Number is Palindrome";
    }
    else
    {
        cout << "The Number is not Palindrome";
    }

    return 0;
}
