#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> max;
    max.push(1);
    max.push(5);
    max.push(6);
    max.push(4);
    cout<<"Size -> "<<max.size()<<endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout<<max.top()<<" "<<endl;
        max.pop();
    }
    cout<<endl;
    cout<<"MAX TOP"<<max.top()<<endl;

    //min heap
    priority_queue<int,vector<int>,greater<int> >min;
    min.push(2);
    min.push(3);
    min.push(4);
    min.push(1);
    cout<<"Size -> "<<min.size()<<endl;

    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<" "<<endl;
        min.pop();
    }
    cout<<endl;
    cout<<"MIN TOP"<<min.top()<<endl;

    cout<<"KHALI HAI KYA BHAI -> "<<min.empty()<<endl;
    cout<<"KHALI HAI KYA BHAI -> "<<max.empty()<<endl;
    


    return 0;
}