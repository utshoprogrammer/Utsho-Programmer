#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin >> n >> k;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long int max_shoppintg = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= k)
        {
            if(a[i] > max_shoppintg)
            {
                max_shoppintg = a[i];
            }
        }
    }
    if(max_shoppintg != 0)
        cout << max_shoppintg<<endl;
        
    else if(max_shoppintg==0)
        cout<<"-1"<<endl;
    return 0;
}