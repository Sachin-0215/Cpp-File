#include <iostream>
using namespace std;

class Rectangle
{
    // if you want to access the data members and member function include public before declaring variables beacuse by default it is private if not include public 
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
    Rectangle r1, r2;

    // Dot operator is used for accessing data members and members function

    r1.length = 10;
    r1.breadth = 5;   

    cout << "Area Of Rectangle : " << r1.area() << endl;
    cout << "Perimeter of Rectangle : " << r1.perimeter() << endl;

    return 0;
}