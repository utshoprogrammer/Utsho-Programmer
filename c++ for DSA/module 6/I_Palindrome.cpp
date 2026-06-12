#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int flag = 1;
    int i = 0;
    int j = s.size()-1;
    while(i<j)
    {
        if(s[i] != s[j])
        {
            flag = 0;
            cout << "NO"<<endl;
            break;
        }
        i++;
        j--;
    }
    if(flag == 1)
    {
        cout << "YES" << endl;
    } 
    return 0;
}