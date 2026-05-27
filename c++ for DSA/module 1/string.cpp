// #include<iostream>
// using namespace std;
// int main()
// {
//     char s[100];
//     cin.getline(s,100); // space sho print 
//     cout<<s<<endl;

//     return 0;
// }
// ignore enter

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin >>x;

//     cin.ignore(); // enter ignore

//     char s[100];

//     cin.getline(s,100); // space sho print 
//     cout << x << endl << s << endl;

//     return 0;
// }

// string variable

#include<iostream>
using namespace std;
int main()
{
    string s;  //string variable 
    cin >>s; 
    cout<<s; // not work for space 
    return 0;
}