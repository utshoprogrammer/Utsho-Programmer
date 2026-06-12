#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[2] << endl; // spacific index element access

    cout << s.at(1) << endl; // spacific index element access

    cout << s.back() << endl;  // end element access 
    cout << s[s.size()-1] << endl;

    cout << s.front() << endl; // frist element access 
    cout<< s[0] << endl;
    
    return 0;
}