#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Holiday";
    string str2 = " World";

    // concatenation
    // str = str +" Great day , How are you ? ";

    // assignment 
    str = str2; 

    // cout << str.at(4) << endl; also written as
    // cout<<str[4]<<endl;
    // str[4]='M';
    // cout<<str;

    cout<<str<<endl<<str2;

    return 0;
}