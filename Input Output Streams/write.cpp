#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // ofstream outfile("My.txt");
    ofstream outfile("My.txt", ios::app);
    outfile << "Sachin" << endl;
    outfile << 46 << endl;
    outfile << "IT" << endl;
    outfile.close();
    return 0;
}