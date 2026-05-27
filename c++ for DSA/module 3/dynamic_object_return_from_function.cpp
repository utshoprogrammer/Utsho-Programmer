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

Student* fun()
{
    Student *karim = new Student(2,5,5.00);
    
    return karim;
}

int main()
{
    Student* p = fun();

    cout << p->roll<<" "<<p->cls<<" "<<p->gpa<<endl;
    
    return 0;
}