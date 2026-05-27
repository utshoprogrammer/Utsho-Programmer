#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
        }
        int mini = INT_MAX;
        int ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                ans = a[i]+a[j]+j-i;
                mini = min(ans,mini);

            }    
        }
        cout<<mini<<endl;
    }
    return 0;
}