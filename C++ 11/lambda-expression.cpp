#include <iostream>
using namespace std;

/*
    Syntax for declaring Lambda expression are--
    [capture_list](parameter_list) ----> return type{body;};
*/

int main()
{
    [](){ cout << "Hello"<<endl; }();

    auto f = [](){ cout << "Hello World!"<<endl; };
    f();
    f();

    [](int x,int y){cout<<"Sum : "<<x+y<<endl;}(10,5);

    cout<<([](int p,int q){return p+q;}(5,6))<<endl;
    
    int a = [](int b,int c)->int {return b+c;}(10,5);
    cout<<a<<endl;

    int g = 10,h=5;
    [g,h](){cout<<g<<" "<<h<<endl;}(); // captured variable can't be modified like incrementing and decrementing

    [&g,&h](){cout<<++g<<" "<<++h<<endl;}(); // for modifying use reference 

    [&](){cout<<++g<<" "<<++h<<endl;}(); // for accessing both element

    int t = 5;
    auto m = [&t](){cout<<t++<<endl;};
    m();
    t++;
    m();

    return 0;
}