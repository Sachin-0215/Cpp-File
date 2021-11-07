#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs("My.txt", ios::trunc);
    ofs << "Sachin" << endl;
    ofs << "46" << endl;
    ofs << "IT" << endl;
    ofs.close();
    return 0;
}