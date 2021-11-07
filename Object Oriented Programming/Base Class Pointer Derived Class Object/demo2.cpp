#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout << "Area of Rectangle" << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void Volume()
    {
        cout << "Volume of Cuboid" << endl;
    }
};

int main()
{
    Rectangle r;
    // Cuboid *q=&r;

    Cuboid c;
    Rectangle *p = &c;
    p->area();
    // p->Volume();


    cout<<endl;
    c.area();
    c.Volume();

    return 0;
}