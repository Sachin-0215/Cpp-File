#include <iostream>
using namespace std;

int main()
{
    float r, area;
    cout << "Enter radius : ";
    cin >> r;

    area = 3.1425f * r * r;  //153.982
    // area = 22/7.0 * r * r;   //154
    // area = 22/7 * r * r;   //147
    // area = (float)22/7 * r * r;   //154

    cout << "Area of the circle are = " << area;
    return 0;
}