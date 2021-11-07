#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello World";
    // cout<<str.find_first_of('l',4);
    // cout<<str.find_first_of("le");

    cout<<str.find_last_of("l");
    cout<<endl;


    return 0;
}