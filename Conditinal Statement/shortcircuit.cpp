#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5, i = 5;

    // if (a > b && ++i <= b)
    // {
    // }
    // cout << i << endl; // The result of this value is 6 because first exprssion is true i.e a>b

    // if (a < b && ++i < b)
    // {
    // }
    // cout << i; // The value is 5 because first expression is false and then second expression is not checked

    // if (a < b || ++i < b)
    // {
    // }
    // cout << i; //6

    if (a > b || ++i < b)
    {
    }
    cout << i << endl; //5

    return 0;
}