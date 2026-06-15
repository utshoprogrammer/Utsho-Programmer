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
    // sort reverse

    // reverse(a,a+n);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name << " "<< a[i].roll << " "<< a[i].marks << endl;
    // }

    // more reverse loop used

    // for (int i = n-1; i >= 0; i--)
    // {
    //     cout << a[i].name << " "<< a[i].roll << " "<< a[i].marks << endl;
    // }

    // spacific name , roll ,section , id, marks etc reverse to use swap function

    // int i = 0;
    // int j = n-1;
    // while(i<j)
    // {
    //     swap(a[i].marks,a[j].marks);
    //     i++;
    //     j--;
    // }
    //print
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name << " "<< a[i].roll << " "<< a[i].marks << endl;
    // }

    return 0;
}