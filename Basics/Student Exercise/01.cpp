// WAP to calculate area of circle take radius as input

#include <iostream>
#include <cmath>

#define pi 3.1425
using namespace std;

int main()
{
    float radius, area;
    cout << "Enter Radius : ";
    cin >> radius;

    area = pi * pow(radius, 2);
    cout<<"Area of the circle is : "<<area;
    return 0;
}