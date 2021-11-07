#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;
    // for storing
    friend ofstream &operator<<(ofstream &ofs, Student &s);
    // for retrieving
    friend ifstream &operator>>(ifstream &ifs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.roll << endl;
    ofs << s.branch << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, Student &s)
{
    ifs >> s.name;
    ifs >> s.roll;
    ifs >> s.branch;
    return ifs;
}

int main()
{
    Student s1;
    s1.name = "John";
    s1.roll = 10;
    s1.branch = "CS";
    ifstream ifs("Student.txt");
    ifs >> s1; // reading the file

    cout << "Name : " << s1.name << endl;
    cout << "Roll No.: " << s1.roll << endl;
    cout << "Branch : " << s1.branch << endl;
    ifs.close();

    // ofstream ofs("Student.txt");
    // ofs<<s1; // writing the file
    // ofs.close();

    return 0;
}