// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int roll;
        // constructors
//     Student(string name,int roll)
//     {
//         this->name = name;
//         this->roll = roll;
//     }
// };
// int main()
// {
        // object decelear
//     Student sakib("Sakib Ahamed",23);

//     cout << sakib.name << endl;
    
//     return 0;
// }

// or work

// #include<bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     string name;
//     int roll;
//     //   constructors
//     Student(string name,int roll)
//     {
//         this->name = name;
//         this->roll = roll;
//     }
//     // fuction decelear
//     void hello()
//     {
//         cout << "Hello from " << name <<endl;
//     }
// };
// int main()
// {
//     //object decelear
//     Student sakib("Sakib Ahamed",23);
//     sakib.hello();

//     Student rakib("Rakib Ahamed",25);
//     rakib.hello();

//     return 0;
// }

// or work

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    //   constructors
    Student(string name,int roll,int math,int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }
    // fuction decelear
    void total()
    {
        cout << "Total marks of "<< name <<" = "<< math + english << endl;
    }
};
int main()
{
    //object decelear
    Student sakib("Sakib Ahamed",23, 85, 95);
    sakib.total();

    Student rakib("Rakib Ahamed",25, 75, 90);
    rakib.total();

    return 0;
}

