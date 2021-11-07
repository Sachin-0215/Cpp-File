// Program to find the speed by using this formula

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int v, u, a;
    float s;

    cout << "Enter the value of accelaration , initial velocity and final velocity : ";
    cin >> a >> u >> v;

    s = (pow(v, 2) - pow(u, 2)) / (2 * a);

    cout << "The Speed of the Velocity is " << s;
    return 0;
}