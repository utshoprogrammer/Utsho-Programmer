#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;

};

// sort assending je order a chai seta true haba

bool cmp(Student l,Student r)
{
    // if(l.marks < r.marks)  // decending (l.marks > r.marks)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }

    // sortcut assending marks

    //return l.marks < r.marks; // decending (return l.marks > r.roll)

    // assending order roll print 

    // if(l.roll < r.roll)      // desending order roll no (l.roll > r.roll)
    // {
    //     return true;
    // }
    // else{
    //     return false;
    // }

    // sortcut assending roll

    //return l.roll < r.roll;    // desending order roll(l.roll > r.roll)

    //more waya jodi marks desending and roll assending order hoy

    // if(l.marks > r.marks)
    // {
    //     return true;
    // }

    // ata 

    // else if(l.marks < r.marks)
    // {
    //     return false;
    // }
    // else
    // {
    //     if(l.roll < r.roll)
    //     {
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }

    //or

    // else{
    //     return l.roll < r.roll;
    // }

    //  more improve

    // if(l.marks == r.marks)
    // {
    //     return l.roll < r.roll;
    // }
    // else{
    //     return l.marks > r.marks;
    // }

    // more improve for one line

    return(l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;

}

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
    // used sort function and call the compare function
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" "<< a[i].roll <<" "<< a[i].marks<<endl;
    }
      
    return 0;   
}