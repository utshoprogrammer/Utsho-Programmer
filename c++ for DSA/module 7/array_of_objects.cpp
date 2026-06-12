// #include<bits/stdc++.h>
// using namespace std;
// class Student 
// {
//     public:
//     string name;
//     int roll;
//     int mark;

// };
// int main()
// {
//     int n;
//     cin >> n;
//     // array input a[6]
//     // object ar array input haba
//     Student a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].roll >> a[i].mark;
//     }
//      // print odject array 
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name <<" "<< a[i].roll<<" "<< a[i].mark << endl;
//     }
    
//     return 0;
// }
// more space with input 

#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int mark;

};
int main()
{
    int n;
    cin >> n;
    // object ar array input 
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        // input name with space 
        cin.ignore();
        getline(cin,a[i].name );
        
        cin >> a[i].roll >> a[i].mark;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name <<" "<< a[i].roll<<" "<< a[i].mark << endl;
    }
    
    return 0;
}