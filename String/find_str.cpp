#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "How are You";

    cout << str.find("are") << endl;
    cout << str.find("Y") << endl;
    cout << str.find("k") << endl;   // garbge value
    cout << str.rfind("o") << endl;


    return 0;
}