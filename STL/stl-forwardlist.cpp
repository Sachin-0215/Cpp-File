#include <iostream>
#include <forward_list>
using namespace std;

// It works internally like a Linked-List
int main()
{
    forward_list<int> fl = {5, 45, 21, 33};
    fl.push_front(55);
    fl.push_front(8);
    fl.pop_front();

    cout << "Forward_List Using For-each Loop" << endl;
    for (int x : fl)
    {
        cout << x << endl;
    }

    cout << "\nForward_List using Iterator" << endl;
    forward_list<int>::iterator itr;
    for (itr = fl.begin(); itr != fl.end(); itr++)
    {
        cout << ++*itr << endl;
    }
    return 0;
}