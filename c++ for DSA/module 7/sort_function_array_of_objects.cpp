#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int math_marks;
    int english_marks;
    int bangla_marks;
    //int total_marks;

};
// sort decending je order a chai seta true haba
bool cmp(Student l,Student r)
{
    if(l.math_marks > r.math_marks)
    {
        return true;
    }
    else if(l.math_marks == r.math_marks)
    {
        if(l.english_marks > r.english_marks)
        {
            return true;
        }
        else if(l.english_marks == r.english_marks)
        {
            if(l.bangla_marks > r.bangla_marks)
            {
                return true;
            }
            else if(l.bangla_marks == r.bangla_marks)
            {
                if(l.roll<r.roll)
                {
                    return true;
                }
                else if(l.roll == r.roll)
                {
                    if(l.name < r.name)
                    {
                        return true;
                    }
                    else if(l.name == r.name)
                    { 
                        //string len comp
                        if(l.name < r.name)
                        {
                            return true;
                        }
                        // char comp
                        // if(l.name[0]<l.name[0])
                        // {
                        //     return true;
                        // }
                    }
                }
            }
        }
    }
    return false;

    // total marks
    // or
    // int l_marks = l.english_marks + l.math_marks + l.bangla_marks;
    // int r_marks = r.english_marks + r.math_marks + r.bangla_marks;

    // if(l.total_marks > r.total_marks)
    // {
    //     return true;
    // }
    // else if(l.total_marks == r.total_marks)
    // {
    //     if(l.roll < r.roll)
    //     {
    //         return true;
    //     }
    // }
    // return false;

}

int main()
{
    int n;
    cin >> n;
    // object ar array input haba
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].math_marks
        >>a[i].english_marks>>a[i].bangla_marks;

        // total marks
        // a[i].total_marks = a[i].math_marks 
        // + a[i].english_marks + a[i].bangla_marks;
    }
    // used sort function and call the compare function

    sort(a,a+n,cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" "<< a[i].roll <<" "<<
        a[i].math_marks<<" "<<a[i].english_marks<<" "<<a[i].bangla_marks<<endl;
    }
      
    return 0;   
}