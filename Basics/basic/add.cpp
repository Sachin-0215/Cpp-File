/* Adding two numbers 
    algorithms of adding number using pseuducode
   * begin
   * Print "enter two numbers"
   * Read a,b
   * c <---- a+b
   * print "addition is c"
   * End
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter two Numbers :"<<endl;
    cin >> a >> b;
    c = a + b;
    cout << "Sum is : " << c;
    return 0;
}