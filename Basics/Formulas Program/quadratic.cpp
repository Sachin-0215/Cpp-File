/*
    Algoritms to find the Roots of quadratic equation 

    r = (-b+sqrt(b*b-4*a*c))/(2*a)

    begin
    * print "Enter a,b,c"
    * Read a,b,c
    *  r1 <--- (-b+sqrt(b*b-4*a*c))/(2*a)
    *  r2 <--- (-b-sqrt(b*b-4*a*c))/(2*a)
    * print "roots = ",r
    end
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float r1, r2;
    cout << "Enter the coefficient of a,b,c : ";
    cin >> a >> b >> c;

    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Roots of +ve value = " << r1 << endl;
    cout << "Roots of -ve value = " << r2 ;

    return 0;
}