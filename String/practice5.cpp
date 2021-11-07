// Program for finding username from email address

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "john123@gmail.com";
    int i = (int)email.find('@');
    string uname=email.substr(0,i);
    cout<<"UserName is "<<uname<<endl;
    return 0;
}