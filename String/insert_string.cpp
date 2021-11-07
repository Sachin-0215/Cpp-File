#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "How you";

    str.insert(3," area",4);

    cout << str;
    return 0;
}