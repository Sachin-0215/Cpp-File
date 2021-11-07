#include <iostream>
#include <list>
using namespace std;

// It works internally like a Linked-List
int main()
{
    list<int> l = {56,45,8,21,33};
    l.push_back(55);
    l.push_back(8);
    l.pop_back();

    cout<<"List Using For-each Loop"<<endl;
    for (int x : l)
    {
        cout << x << endl;
    }

    cout<<"\nList using Iterator"<<endl;
    list<int>::iterator itr;
    for(itr=l.begin();itr!=l.end();itr++)
    {
        cout<<++*itr<<endl;
    }
    return 0;
}