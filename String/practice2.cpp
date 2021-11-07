// Change case from upper to lower case

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str2 = "WElCOmE";

    for (int i = 0; i < str2[i] != '\0'; i++)
    {
        if (str2[i] >= 65 && str2[i] <= 97)
        {
            str2[i] = str2[i] + 32;
        }
    }
    cout << str2 << endl;

    string str = "WeLcOmE7";
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str << endl;

    return 0;
}