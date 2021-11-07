#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int mathsMarks;
    int phyMarks;
    int chemMarks;

public:
    Student(int r, string n, int m, int p, int c)
    {
        roll = r;
        name = n;
        mathsMarks = m;
        phyMarks = p;
        chemMarks = c;
    }
    int total()
    {
        return mathsMarks + phyMarks + chemMarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
        {
            return 'A';
        }
        else if (average >= 40 && average < 60)
        {
            return 'B';
        }
        else
        {
            return 'C';
        }
    }
};

int main()
{
    int roll;
    string name;
    int m, p, c;
    cout << "Enter Roll number of a Student : "<<endl;
    cin >> roll;
    cout << "Enter Name of a Student : "<<endl;
    cin>>name;
    
    cout << "Enter Marks in 3 subjects : "<<endl;
    cin >> m >> p >> c;

    Student s(roll, name, m, p, c);
    cout << "Total Marks : " << s.total() << endl;
    cout << "Grade of students is : " << s.grade() << endl;
    return 0;
}