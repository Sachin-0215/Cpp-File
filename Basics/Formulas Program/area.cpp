/*
    Algorithm to finding the area of triangle
    area = (b*h)/2
    O/P     I/P
    Begin
    * Print "enter base and height" 
    * Read the values
    * a <---- (b*h)/2
    * Print "area is",a
    End
*/

#include <iostream>
using namespace std;

int main()
{
    float b, h, area;
    cout << "Enter the value of base and height :" << endl;
    cin >> b >> h;

    area = (b * h) / 2;

    cout << "The Area of Triangle is : " << area;

    return 0;
}
