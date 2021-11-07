#include <iostream>
using namespace std;

class Your;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Your;
};

class Your
{
public:
    My m;
    void fun()
    {
        m.a = 10;
        m.b = 5;
        m.c = 20;
    }
};

int main()
{
    return 0;
}