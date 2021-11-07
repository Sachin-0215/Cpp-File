/*
    WAP to calculate Net Salary Program should take following as input
    * Basic Salary
    * Percentage of Allowances 
    * Percentage of Deductions
*/

#include <iostream>
using namespace std;

int main()
{
    float basic,
        percentAllow,
        percentDeduct,
        netSalary;

    cout << "Enter Basic Salary : ";
    cin >> basic;

    cout << "Enter Percentage of Allowances : ";
    cin >> percentAllow;

    cout << "Enter Percentage of Deductances : ";
    cin >> percentDeduct;

    netSalary = basic + basic * percentAllow / 100 - basic * percentDeduct / 100;
    cout << "Net Salary is : " << netSalary << endl;
    return 0;
}