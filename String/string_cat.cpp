#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[20]="Good";
    char s2[20]="Morning";

    // strcat(s1,s2);  // GoodMorning

    strncat(s1,s2,3);  //GoodMor

    cout<<s1<<endl;

    return 0;
}