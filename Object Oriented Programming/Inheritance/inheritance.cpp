#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "Display from the Base Class : " << a << endl;
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Show from Derived Class" << endl;
    }
};

int main()
{
    // Base b;
    // b.display();

    Derived d;
    d.a=10;
    d.display();
    d.show();

    return 0;
}