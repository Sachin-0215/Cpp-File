#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, discriminant, roots1, roots2;

    cout << "Enter the value of coefficent a,b,c : ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;
    if (discriminant == 0)
    {
        roots1 = -b / (2 * a);
        cout << roots1 << ",Roots are real and equal.";
    }
    else if (discriminant > 0)
    {
        roots1 = (-b + sqrt(discriminant)) / (2 * a);
        roots2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << roots1 << " " << roots2 << ",Roots are real and unequal.";
    }
    else
    {
        cout << "Roots are imaginary.";
    }

    return 0;
}