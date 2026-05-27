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

Student fun()
{
    Student karim(2,5,5.00);
    return karim;
}

int main()
{
    Student obj = fun();

    cout << obj.roll<<" "<<obj.cls<<" "<<obj.gpa<<endl;
    
    return 0;
}