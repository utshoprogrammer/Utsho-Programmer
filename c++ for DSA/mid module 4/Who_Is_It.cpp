#include<bits/stdc++.h>
using namespace std;
class Student
{  
    public:
    int ID;
    string name;
    char section;
    int total_mark;
    Student(int ID,string name,char section,int total_mark)
    {
        this->ID = ID;
        this->name = name;
        this->section = section;
        this->total_mark = total_mark; 
    }

};
int main()
{
    int ID;
    string name;
    char section;
    int total_mark;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin>>ID>>name>>section>>total_mark;
        Student s1(ID,name,section,total_mark);

        cin>>ID>>name>>section>>total_mark;
        Student s2(ID,name,section,total_mark);

        cin>>ID>>name>>section>>total_mark;
        Student s3(ID,name,section,total_mark);

        // int max = INT_MIN;
        // cout <<s1.ID<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_mark<<endl;
        // cout <<s2.ID<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_mark<<endl;
        // cout <<s3.ID<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_mark<<endl;
        if(s1.total_mark >= s2.total_mark && s1.total_mark >= s3.total_mark )
        {
            cout <<s1.ID<<" "<<s1.name<<" "<<s1.section<<" "<<s1.total_mark<<endl;
        }
        else if(s2.total_mark >= s3.total_mark && s2.total_mark >= s1.total_mark )
        {
            cout <<s2.ID<<" "<<s2.name<<" "<<s2.section<<" "<<s2.total_mark<<endl;
        }
        else if(s3.total_mark >= s1.total_mark && s3.total_mark >= s2.total_mark )
        {
            cout <<s3.ID<<" "<<s3.name<<" "<<s3.section<<" "<<s3.total_mark<<endl;
        }
    }
     
    return 0;
}