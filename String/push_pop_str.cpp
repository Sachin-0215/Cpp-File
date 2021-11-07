#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Programming";

    str.push_back('H');
    cout << str << endl;
    
    str.pop_back();
    cout << str << endl;
    return 0;
}