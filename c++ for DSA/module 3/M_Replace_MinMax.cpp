#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maximum = max(a[i],maximum);
    }
    for (int i = 0; i < n; i++)
    {
        minimum = min(a[i],minimum);
    }
    
    swap(minimum,maximum);
    for (int i = 0; i < n; i++)
    {
        if(a[i] == minimum)
        {
            a[i] = maximum;
        }
        if(a[i] == maximum)
        {
            a[i] = minimum;
        }
        cout << a[i]<<" ";
    }
    return 0;
}