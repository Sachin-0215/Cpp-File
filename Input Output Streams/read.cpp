#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("My.txt");
    if (!infile)
    {
        cout << "File cannot be opened";
    }
    string str;
    int x;
    infile >> str >> x;
    cout << str << endl;
    cout << " " << x;
    infile.close();
    if (infile.eof())
    {
        cout << "End of file";
    }
    return 0;
}