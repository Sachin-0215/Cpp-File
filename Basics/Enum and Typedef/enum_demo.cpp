#include <iostream>
using namespace std;

// Enum is defining a group of constants under one name that is related constants under one and is defined in outside of main()

enum day
{
    mon=10,
    tue,
    wed=5,
    thu,
    fri=24,
    sat,
    sun
};

int main()
{
    day d;

    // d=1;  value cannot be assign in the variable d
    // mon++;  error const cannot be updated

    // cout << mon << endl;    //0
    // cout << tue << endl;    //1
    // cout << wed << endl;    //2
    // cout << thur << endl;   //3
    // cout << fri << endl;    //4
    // cout << sat << endl;    //5
    // cout << sun << endl;    //6

    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;

    return 0;
}