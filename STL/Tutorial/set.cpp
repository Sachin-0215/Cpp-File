#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(73);
    s.insert(23);
    s.insert(23);
    s.insert(73);
    s.insert(7);
    s.insert(7);
    s.insert(7);

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i:s)
        cout<<i<<" ";
    cout<<endl;    

    cout<<"73 is present or not ?? -> "<<s.count(73)<<endl;

    cout<<"7 is present or not ?? -> "<<s.count(7)<<endl;

    set<int>::iterator te = s.find(7);
    // cout<<"Value present at te -> "<<*te<<endl;

    for(auto it=te;it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}