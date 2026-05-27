// monual input 
// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     char name[100];
//     int roll;
//     double gpa;

// };

// int main()
// {
//     Student a;
//     a.roll = 10;
//     a.gpa = 4.5;
//     char temp[100]="Rakib";
//     strcpy(a.name,temp);

//     cout << a.name <<" "<<a.gpa<<" "<<a.roll<<endl;
    
//     return 0;
// }

// user input 

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    double gpa;

};

int main()
{
    Student a,b;
    cin.getline(a.name,100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name,100);
    cin >> b.roll >> b.gpa;

    cout << a.name <<" "<<a.gpa<<" "<<a.roll<<endl;
    cout << b.name <<" "<<b.gpa<<" "<<b.roll<<endl;
    
    return 0;
}