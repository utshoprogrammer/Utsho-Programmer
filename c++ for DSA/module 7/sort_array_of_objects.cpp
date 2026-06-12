#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;

};
// sort assending, je order a chai seta true haba
bool cmp(Student l,Student r)
{
    if(l.marks < r.marks)
    {
        return true;
    }
    else{
        return false;
    }
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