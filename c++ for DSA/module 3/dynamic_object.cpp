#include<bits/stdc++.h>
using namespace std;

class Student   //class & class name
{
    public:
    int roll;
    int cls;
    double gpa;
    // constructor
    Student(int roll,int cls,double gpa)
    {
        //(*this).roll = roll;
        //(*this).cls = cls;
        //(*this).gpa = gpa;
        //or
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }

};

int main()
{
    Student rahim(45,5,3.2); // object
    Student* karim = new Student(2,5,5.00);

    cout << rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;
    cout << karim->roll<<" "<<karim->cls<<" "<<karim->gpa<<endl;
    
    return 0;
}