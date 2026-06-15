#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >>b;
    cout <<  min(a,b) <<endl; //min print with function
    cout <<max(a,b) << endl; //max print with function
    // some value check 
    
    cout << min({1,3,4,5,6,7,9})<<endl;
    cout << max({10,20,30,3,40,100})<<endl;

    return 0;
}

//swap()function

// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main()
// {
//     int a,b;
//     cin >>a>>b;
//     swap(a,b);
//     cout <<a <<" "<<b<<endl;
//     return 0;
// }