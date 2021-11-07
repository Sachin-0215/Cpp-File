#include <iostream>
using namespace std;

class Outer
{
public:
    int a = 10;   // non static members
    static int b; // static data members

    void fun()
    {
        i.show();
        cout << i.x;
    }
    class Inner
    {
    public:
        int x = 25;
        void show()
        {
            cout << "Slow";
            cout << b; // it can be access because of static members
            // cout<<a;// cannot access because of non static memebers
        }
    };
    Inner i; // inner class
};

int Outer::b = 20;

int main()
{

    return 0;
}