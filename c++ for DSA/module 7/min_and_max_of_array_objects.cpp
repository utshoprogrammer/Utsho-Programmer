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
    // object ar array input haba
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // minimum marks count 

    // int minimum = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     minimum = min(a[i].marks,minimum);
    // }
    // cout << minimum << endl;

    // minimum array objects

    // Student minimum;
    // minimum.marks = INT_MAX;

    // for(int i = 0; i < n ; i++)
    // {
    //     if(a[i].marks < minimum.marks)
    //     {
    //         minimum = a[i];
    //     }
    // }
    // cout << minimum.name <<" "<< minimum.roll <<" "<< minimum.marks<<endl;

    // maximum array of objects

    Student maximum;
    maximum.marks = INT_MIN;

    for(int i = 0; i < n ; i++)
    {
        if(a[i].marks > maximum.marks)
        {
            maximum = a[i];
        }
    }
    cout << maximum.name<<" "<<maximum.roll<<" "<<maximum.marks<<endl;
    
    return 0;   
}