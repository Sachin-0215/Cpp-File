#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(4, 2);
    cout << "Print a" << endl;
    for (int m : a)
        cout << m << " ";
    cout << endl;

    vector<int> last(a);
    cout << "Print last" << endl;
    for (int m : last)
        cout << m << " ";
    cout << endl;

    cout << v.capacity() << endl;
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
    v.push_back(3);
    cout << v.capacity() << endl;
    v.push_back(5);
    cout << v.capacity() << endl;

    cout << "Size -> " << v.size() << endl;

    cout << "\nElement at index 2 : " << v.at(2);
    cout << "\nFront element " << v.front() << " and back element is " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int b : v)
        cout << b << " ";
    cout << endl;

    v.pop_back();

    cout << "After pop" << endl;
    for (int b : v)
        cout << b << " ";
    cout << endl;

    cout << "Before clear : " << v.size() << endl;
    v.clear();
    cout << "After clear : " << v.size() << endl;

    return 0;
}