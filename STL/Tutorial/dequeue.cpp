#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(4);
    d.push_front(5);

    for(int i:d)
        cout<<i<<" ";
    cout<<endl;

    // d.pop_back();
    // for(int i:d)
    //     cout<<i<<" ";
    // cout<<endl;

    // d.pop_front();
    // for(int i:d)
    //     cout<<i<<" ";
    // cout<<endl;

    cout<<"Print First Index Element -> "<<d.at(0)<<endl;
    cout<<"Print Second Index Element -> "<<d.at(1)<<endl;
    cout<<"Print Third Index Element -> "<<d.at(2)<<endl;
    cout<<"Print Fourth Index Element -> "<<d.at(3)<<endl;

    cout<<endl<<endl<<"Front Index "<<d.front()<<endl;
    cout<<"Back Index "<<d.back()<<endl;

    cout<<"Empty or Not "<<d.empty()<<endl;

    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+3);
    cout<<"After erase "<<d.size()<<endl;

    for(int i:d)
        cout<<i<<" ";
    cout<<endl;


    return 0;
}