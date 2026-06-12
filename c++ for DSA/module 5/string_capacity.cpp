#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World!";
    // cout << s.size() << endl; // string size 

    // cout << s.max_size()<<endl;  // max size of string (10^6 OR 7)

    // cout << s.capacity()<<endl; //present string capacity

    // s.clear();             // delete string 
    // cout << s <<endl; 

    // s.empty();   //empty check
    // if(s.empty()== true)
    // {
    //     cout << "empty"<<endl;
    // }
    // else{
    //     cout << "Not empty"<<endl;
    // }

    //s.resize(3);   // string size (bara/coma) jay and new elemet add kora jay
    //s.resize(15);

    s.resize(15,'U');
    cout<< s <<endl;

    return 0;
}