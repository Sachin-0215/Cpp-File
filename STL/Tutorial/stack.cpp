#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("RajKumar");
    s.push("Piyush");
    s.push("Sachin");
    s.push("I.T");

    cout<<"Top Element -> "<<s.top()<<endl;
    s.pop();
    cout<<"After Pop Top Element -> "<<s.top()<<endl;
    cout<<"Size of Stack is "<<s.size()<<endl;

    cout<<"Empty or Not -> "<<s.empty()<<endl;
    
    return 0;
}