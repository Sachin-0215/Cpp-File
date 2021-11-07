#include <iostream>
#include <vector>
using namespace std;

// vector is works like an array internally
int main()
{
    vector<int> v = {10, 20, 30, 40};
    v.push_back(25);
    v.push_back(70);
    v.pop_back();

    cout << "Vector using For-each loop" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }

    cout << "\nVector Using Iterator" << endl;
    vector<int>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++)
    {
        cout << ++*itr << endl;
    }
    return 0;
}