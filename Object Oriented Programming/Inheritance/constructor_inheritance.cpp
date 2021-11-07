#include <iostream>
using namespace std;

class Base
{
public:
    Base() { cout << "Non Parameter Base Class" << endl; }
    Base(int x) { cout << "Parameter of the Base Class " << x << endl; }
};
class Derived : public Base
{
public:
    Derived() { cout << "Non Parameter of Derived Class" << endl; }
    Derived(int y) { cout << "Parameter of Derived Class " << y << endl; }
    Derived(int x, int y):Base(x)
    {
        cout << "Parameter of Derived Class " << x<<" "<<y << endl;
    }
};
int main()
{
    // Derived d();
    // Derived d(10);
    Derived d(5,10);
    return 0;
}