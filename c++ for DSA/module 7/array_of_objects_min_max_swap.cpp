#include<bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    string name;
    int roll;
    int marks;

};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // 1 no soloution
    // decelar object marks then cmpare Student marks

    Student min_marks, max_marks;

    min_marks.marks = INT_MAX;
    max_marks.marks = INT_MIN;
    
    for (int i = 0; i < n; i++)
    {
        if(min_marks.marks > a[i].marks)
        {
            min_marks = a[i];    // update the student object
        }
        if(max_marks.marks < a[i].marks)
        {
            max_marks = a[i];
        }
    }
    cout << min_marks.marks << " "<< max_marks.marks<<endl;

    //before swap 

    cout << min_marks.name <<" "<<min_marks.roll <<" "<<min_marks.marks<< endl;
    cout << max_marks.name <<" "<<max_marks.roll <<" "<<max_marks.marks<< endl;

    //after swap
    swap(min_marks.marks,max_marks.marks);
    
    cout << min_marks.name <<" "<<min_marks.roll <<" "<<min_marks.marks<< endl;
    cout << max_marks.name <<" "<<max_marks.roll <<" "<<max_marks.marks<< endl;

    // 2.soloution

    // int min_indx = 0;
    // int max_indx = 0;

    // int min_marks = INT_MAX;
    // int max_marks = INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     if(min_marks > a[i].marks)
    //     {
    //         min_marks = a[i].marks;
    //         min_indx = i;
    //     }
    //     if(max_marks < a[i].marks)
    //     {
    //         max_marks = a[i].marks;
    //         max_indx = i;
    //     }
    // }
    // before swap 

    // cout << a[min_indx].name <<" "<<a[min_indx].roll <<" "<<a[min_indx].marks<< endl;
    // cout << a[max_indx].name <<" "<<a[max_indx].roll <<" "<< a[max_indx].marks<< endl;

    // after swap 

    //swap(a[min_indx],a[max_indx]);

    // cout << a[min_indx].name <<" "<<a[min_indx].roll <<" "<<a[min_indx].marks<< endl;
    // cout << a[max_indx].name <<" "<<a[max_indx].roll <<" "<< a[max_indx].marks<< endl;

    
    return 0;
}