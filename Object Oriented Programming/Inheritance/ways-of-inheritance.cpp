#include <iostream>
using namespace std;

class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funcParent()
    {
        a = 10;
        b = 2;
        c = 5;
    }
};
class Child : private Parent
{
private:
protected:
public:
    void funcChild()
    {
        // a = 10; this member does not accessing
        b = 3;
        c = 7;
    }
};
class GrandChild : public Child
{
public:
    void funcGrandChild()
    {
        // a=10; // cannot access
        // b = 5;
        // c = 20;
    }
};

int main()
{
    // Child ch;
    // ch.a=10;
    // ch.b=5;
    // ch.c = 90;

    return 0;
}