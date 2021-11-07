// Count Number of vowels,consonants and words
// Vowels are A E I O U
// C

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "how Many Words";
    int vowels = 0, consonant = 0, space = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            consonant++;
        }
        cout << "Vowels " << vowels << endl;
        cout << "Consonant " << consonant << endl;
        cout << "Words " << space << endl;
        cout << endl;
    }

    return 0;
}