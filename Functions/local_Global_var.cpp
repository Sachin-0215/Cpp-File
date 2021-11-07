#include <iostream>
using namespace std;

int g = 5;
void fun()
{
    int a = 10; // Local Variable
    a++;
    g++; // g is also accessed in this function
    cout << a << " " << g << endl;
}

int main()
{

    cout << g << endl; // but g can be accessed in the main function because g is global variable

    // cout << a;  here a can not be access inside main function
    fun();

    cout << g << endl; // but g can be accessed in the main function because g is global variable

    return 0;
}