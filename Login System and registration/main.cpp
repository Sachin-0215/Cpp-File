#include <iostream>
#include <fstream>
#include <string>

using namespace std;
bool IsloggedIn()
{
    string username, password, un, pw;
    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;

    ifstream read("C:\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int choice;
    cout << "1. Register\n2. Login\nYour Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        string username, password;
        cout << "Select a Username : ";
        cin >> username;
        cout << "Select a password : ";
        cin >> password;

        ofstream file;
        file.open("C:\\" + username + ".txt");

        file << username << endl << password;
        file.close();

        main();
    }
    else if (choice == 2)
    {
        bool status = IsloggedIn();

        if (!status)
        {
            cout << "False Login !" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "Successfully Logged In!" << endl;
            system("PAUSE");
            return 1;
        }
    }

    return 0;
}