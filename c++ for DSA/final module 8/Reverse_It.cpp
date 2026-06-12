#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    string se;
    int Id;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i = 0;i<n;i++)
    {
        cin >> a[i].name >> a[i].cls>>a[i].se>>a[i].Id;
    }
    int i = 0;
    int j = n-1;
    while(i<j)
    {
        swap(a[i].se,a[j].se);
        i++;
        j--;
    }    
    for(int i = 0; i<n ;i++)
    {
        cout<< a[i].name <<" "<< a[i].cls <<" "<<a[i].se<<" "<<a[i].Id<<endl;
    }   
    return 0;
}