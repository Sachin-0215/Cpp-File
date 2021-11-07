#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m.insert(pair<int, string>(1, "Sachin"));
    m.insert(pair<int, string>(2, "Piyush"));
    m.insert(pair<int, string>(3, "Raj"));

    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }
    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    cout<<"Value Found is "<<endl;
    cout << itr1->first << " " << itr1->second << endl;

    return 0;
}