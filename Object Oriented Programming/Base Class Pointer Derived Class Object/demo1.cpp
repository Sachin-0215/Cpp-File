#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "Fun1 of Base" << endl;
    }
};
class Derived : public Base
{
public:
    void fun2()
    {
        cout << "Fun2 of Derived" << endl;
    }
};

int main()
{
    Base b;
    // Derived *ptr=&b;
    Derived d;
    Base *ptr=&d;
    ptr->fun1();
    cout<<endl<<endl;
    // ptr->fun2(); // this function cannot be called
    d.fun1();
    d.fun2();
    return 0;
}