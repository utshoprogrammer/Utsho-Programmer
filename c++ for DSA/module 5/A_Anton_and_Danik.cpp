#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a_count = 0;
    int d_count = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'A')
        {
            a_count++;
        }
        else if(s[i] == 'D')
        {
            d_count++;
        }    
    }
    if(a_count > d_count)
    {
        cout <<"Anton"<<endl;
    }
    else if(a_count < d_count)
    {
        cout <<"Danik"<<endl;
    }
    else if(a_count == d_count)
    {
        cout << "Friendship"<<endl;
    }
    
    return 0;
}