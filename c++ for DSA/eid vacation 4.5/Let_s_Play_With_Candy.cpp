#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int candy_abs = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == candy_abs)
        {
            candy_abs++;
        }
    }
    cout << candy_abs << endl;
    return 0;
}