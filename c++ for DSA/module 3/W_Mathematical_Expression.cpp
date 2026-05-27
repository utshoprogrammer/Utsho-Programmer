#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int ans =0;
    if(s=='+')
    {
        ans = a+b;
    }
    else if(s=='-')
    {
        ans = a-b;
    }
    else if(s=='*')
    {
        ans = a*b;
    }
    if(ans == c)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<< ans<<endl;
    }
    return 0;
}