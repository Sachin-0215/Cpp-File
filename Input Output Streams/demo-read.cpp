#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("My.txt");

    if (ifs.is_open())
    {
        cout << "File is Opened" << endl;
    }
    string name;
    int rollno;
    string branch;

    ifs >> name >> rollno >> branch;
    ifs.close();

    cout << "Name : " << name << endl;
    cout << "Roll No. : " << rollno << endl;
    cout << "Branch : " << branch << endl;
    return 0;
}