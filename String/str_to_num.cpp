#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char p1[10] = "235";
    char s2[10] = "54.79";

    long int x = strtol(p1, NULL, 10);
    float y = strtof(s2, NULL);

    cout<<x+10<<endl;
    cout<<y-8<<endl;


    return 0;
}