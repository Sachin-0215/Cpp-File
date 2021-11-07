#include <iostream>
using namespace std;

template <typename T>
void fun(T f)
{
    f();
}

int main()
{
    int t = 5;
    auto m = [&t](){cout<<t++<<endl;};
    fun(m);
    fun(m);

    return 0;
}