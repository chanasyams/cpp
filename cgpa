#include <iostream>
#include <string>
using namespace std;
class student
{
    string name;
    int rollno;
    float cgpa;
    int arrear;
public:
    student()
    {
        name = " ";
        rollno = 0;
        cgpa = 0.0;
        arrear = 0;
    }
    void getdata()
    {
        cout << "Enter student name: " << endl;
        cin >> name;
        cout << "Enter rollno: " << endl;
        cin >> rollno;
        cout << "Enter cgpa: " << endl;
        cin >> cgpa;
        cout << "Enter arrear count: " << endl;
        cin >> arrear;
    }
    void print() const
    {
        cout << "Name of the student is " << name << endl;
        cout << "Roll number is " << rollno << endl;
        cout << "Average GPA is " << cgpa << endl;
        cout << "Number of arrear " << arrear << endl;
    }
    void high(student s[], int a)
    {
        if (a <= 0) return;
        int highIndex = 0;
        for (int i = 1; i < a; i++)
        {
            if (s[i].cgpa > s[highIndex].cgpa)
            {
                highIndex = i;
            }
        }
        cout << "Student with highest CGPA:" << endl;
        s[highIndex].print();
    }
    void low(student s[], int a)
    {
        if (a <= 0)
           return;
        int lowIndex = 0;
        for (int i = 1; i < a; i++)
        {
            if (s[i].cgpa < s[lowIndex].cgpa)
            {
                lowIndex = i;
            }
        }
        cout << "Student with lowest CGPA:" << endl;
        s[lowIndex].print();
    }
};
int main()
{
    const int a = 4;
    student s[a];
    for (int i = 0; i < a; i++)
    {
        s[i].getdata();
        s[i].print();
    }
    student t1;
    t1.high(s, a);
    t1.low(s, a);
    return 0;
 }
