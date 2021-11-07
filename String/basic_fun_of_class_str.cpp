// Basic Function of Class String

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";
    string str2 = "sachin";
    string str3 = "hello";
    string str4 = "";

    cout << str.length() << endl;
    cout << str << endl
         << endl;

    // cout<< str2.size() << endl;
    // cout<< str2 << endl<<endl;

    // cout<< str3.capacity() << endl;
    // cout<< str3 << endl<<endl;

    // str.resize(50);
    // cout<< str4.capacity() << endl;
    // cout<< str4 << endl<<endl;

    // str.reserve(50);
    // cout<< str3.max_size() << endl;
    // cout<< str3 << endl<<endl;

    // str.clear();
    // cout << str << endl;
    // cout << str.length() << endl;

    if (str.empty())
    {
        cout << "It is empty";
    }
    else
    {
        cout << "String is " << str << endl;
    }

    return 0;
}