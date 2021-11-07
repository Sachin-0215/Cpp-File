#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;
    m[1] = "Sachin";
    m[23] = "S/W";
    m[2] = "Gupta";
    m.insert({5,"W.D"});

    cout<<"Before erase "<<endl;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Fiding -23 ->"<<m.count(-23)<<endl;

    cout<<"------------------------------------"<<endl;
    m.erase(23);
    cout<<"After erase "<<endl;
    for(auto i:m)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<"------------------------------------"<<endl;

    auto it = m.find(1);

    for(auto i=it;i!=m.end();i++)
        cout<<(*i).first<<endl;

    return 0;
}