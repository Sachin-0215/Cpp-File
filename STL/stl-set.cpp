#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {56, 45, 21, 33, 8};
    s.insert(55);
    s.insert(8);

    cout << "Set Using For-each Loop" << endl;
    for (int x : s)
    {
        cout << x << endl;
    }

    cout << "\nSet using Iterator" << endl;
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << endl;
    }
    return 0;
}