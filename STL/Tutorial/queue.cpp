#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("A.I");
    q.push("O.S");
    q.push("T.O.C");

    cout<<"Before Popping : "<<endl;
    q.pop();
    cout<<"First Element : "<<q.front()<<endl;
    cout<<"After Popping : "<<endl;
    cout<<"Size after Popping : "<<q.size()<<endl;




    return 0;
}