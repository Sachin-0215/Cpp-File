#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};

int main()
{
    unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area()<<endl;

    // unique_ptr<Rectangle> ptr2(ptr); // can't initialised another pointer
    unique_ptr<Rectangle> ptr2;
    ptr2 = move(ptr);
    cout<<ptr2->area()<<endl;
    // cout<<ptr->area()<<endl; 
    return 0;
}