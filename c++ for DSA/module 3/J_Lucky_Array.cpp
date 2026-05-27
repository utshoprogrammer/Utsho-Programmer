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
    int flag = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        flag = min(a[i],flag);
    }
    int cout_min = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == flag)
        {
            cout_min++;
        }
        else 
        {
            continue;
        }
    }
    if(cout_min % 2 != 0)
    {
        cout<<"Lucky"<<endl;
    }
    else
    {
        cout << "Unlucky"<<endl;
    }

    return 0;
}