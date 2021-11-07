#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
     int roll;
     string name;
     static int addNo;
     Student(string n)
     {
          addNo++;
          roll = addNo;
          name = n;
     }
     void display()
     {
          cout << "Name - " << name << endl
               << "RollNo : " << roll << endl;
     }
};

int Student::addNo = 0;

int main()
{
     Student s1("John");
     Student s2("Ravi");
     Student s3("Sachin");
     Student s4("Shivaay");
     Student s5("Sachin");


     s1.display();
     s2.display();
     s3.display();
     cout<<"Number Admission "<<Student::addNo<<endl;

     return 0;
}