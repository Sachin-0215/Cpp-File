#include <iostream>
using namespace std;

class Parent /*Final*/
{
    // void show() final // non virtual cannot use final keyword
    virtual void show() final
    {
    }
};
class Child : Parent // Final is used for restrict the inheritance
{
    // void show() // final keyword is also restricting the function overriding
    // {
    // }
};

int main()
{

    return 0;
}