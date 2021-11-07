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
    // creating an object of rectangle r
    Rectangle r;

    // taking a pointer of type rectangle ptr
    Rectangle *ptr;
    ptr=&r; // ptr assign to r and ptr points on an object
    ptr->length=10; // ptr access length and breadth
    ptr->breadth=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;

    
    return 0;
}