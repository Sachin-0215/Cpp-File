// Find the length of the string

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "WELCOME";
    // int count=0;

    // First Method

    // for (int i = 0; str[i]!='\0'; i++)
    // {
    //     count++;
    // }
    // cout<<"Length is : "<<count;

    // Second Method
    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }
    cout << "Length is : " << count << endl;

    return 0;
}