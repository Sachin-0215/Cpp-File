#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[20] = "x=10;y=82;z=92";

    char *token = strtok(s1, "=;");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;");
        // token = strtok(NULL, "?=");

    }

    return 0;
}