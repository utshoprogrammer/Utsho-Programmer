#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    cin >> name >> roll >> section >> math_marks >> cls;
    Student s1(name, roll, section, math_marks, cls);

    cin >> name >> roll >> section >> math_marks >> cls;
    Student s2(name, roll, section, math_marks, cls);

    cin >> name >> roll >> section >> math_marks >> cls;
    Student s3(name, roll, section, math_marks, cls);

    // cout <<s1.name<<" "<<s1.roll<<" "<<s1.section<<" "<<s1.math_marks<<" "<<s1.cls <<endl;
    // cout <<s2.name<<" "<<s2.roll<<" "<<s2.section<<" "<<s2.math_marks<<" "<<s2.cls <<endl;
    // cout <<s3.name<<" "<<s3.roll<<" "<<s3.section<<" "<<s3.math_marks<<" "<<s3.cls <<endl;

    if (s1.math_marks >= s2.math_marks && s1.math_marks >= s3.math_marks)
    {
        cout << s1.name << endl;
    }
    else if (s2.math_marks >= s3.math_marks && s2.math_marks >= s1.math_marks)
    {
        cout << s2.name << endl;
    }
    else if (s3.math_marks >= s1.math_marks && s3.math_marks >= s2.math_marks)
    {
        cout << s3.name << endl;
    }
    return 0;
}