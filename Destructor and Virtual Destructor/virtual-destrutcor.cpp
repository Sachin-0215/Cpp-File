#include <iostream>
using namespace std;

class BASE
{
public:
    // BASE() { cout << "Constructor of Base" << endl; }
    // ~BASE()
    virtual ~BASE()
    {
        cout << "Destructor of Base" << endl;
    }
};
class Derived : public BASE
{
public:
    // Derived() { cout << "Constructor of Derived" << endl; }
    ~Derived()
    {
        cout << "Destructor of Derived" << endl;
    }
};

void fun()
{
    // Derived d;
    BASE *p = new Derived();
    delete p;
}
int main()
{
    fun();
    return 0;
}