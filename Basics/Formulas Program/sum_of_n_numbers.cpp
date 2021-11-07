/*
    Algorithms for finding sum of n natural numbers

    sum = 1+2+3+4.........+n-1+n
    so sum = n*(n+1)/2

    begin 
    * print "Enter n"
    * Read n
    * sum <-- n*(n+1)/2
    * print "sum = ",sum
    end
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;

    int sum = n * (n + 1) / 2;

    cout << "Sum of " << n << " number is : " << sum;
    return 0;
}