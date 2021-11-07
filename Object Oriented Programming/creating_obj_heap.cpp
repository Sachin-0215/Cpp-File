#include <iostream>
using namespace std;

class Rectangle
{

public:
    // both are data members
    int length;
    int breadth;

    // both are members function
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length * breadth);
    }
};

int main()
{
    
    Rectangle *ptr=new Rectangle;  // dynamic object created in heap

    ptr->length=10;
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    
    return 0;
}