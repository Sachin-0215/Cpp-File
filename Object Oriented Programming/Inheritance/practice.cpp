// Write a class for Employee
// Derived Classes
/*
    * Fulltime employee with salary
    * Part time employee with Daily wages
    Write Required Methods
*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int eid;
    string name;

public:
    Employee(int e, string n)
    {
        eid = e;
        name = n;
    }
    int getEmployeeID() { return eid; }
    string getName() { return name; }
};

class FulltimeEmployee : public Employee
{
private:
    int salary;

public:
    FulltimeEmployee(int e, string n, int sal) : Employee(e, n)
    {
        salary = sal;
    }
    int getSalary() { return salary; }
};
class ParttimeEmployee : public Employee
{
private:
    int wage;

public:
    ParttimeEmployee(int e, string n, int w) : Employee(e, n)
    {
        wage = w;
    }
    int getWage() { return wage; }
};
int main()
{
    ParttimeEmployee p1(1, "Piyush", 300000);
    FulltimeEmployee p2(2, "Raj", 5000000);

    cout << "Daily Wage of " << p1.getName() << " is " << p1.getWage() << endl;
    cout << "Salary of " << p2.getName() << " is " << p2.getSalary() << endl;

    return 0;
}