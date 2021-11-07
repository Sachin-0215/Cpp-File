#include <iostream>
using namespace std;

template <class T> // template class name will be any of you want
T maxim(T a, T b)
{
    return a > b ? a : b;
}

// int maxim(int a, int b)
// {
//     return a > b ? a : b;
// }
// float maxim(float a, float b)
// {
//     return a > b ? a : b;
// }

int main()
{
    cout<<"Greater is - "<<maxim(122,14)<<endl;
    cout<<"Greater is - "<<maxim(12.4f,14.65f)<<endl;
    cout<<"Greater is - "<<maxim(15.5,14.5)<<endl; // treated as double


    return 0;
}