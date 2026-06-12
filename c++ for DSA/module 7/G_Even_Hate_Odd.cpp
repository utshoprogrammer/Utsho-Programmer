#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            int target = n / 2;
            int cout_even = 0;
            int cout_odd = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    cout_even++;
                }
                else
                {
                    cout_odd++;
                }
            }           
            int result = abs(cout_even - target);
            cout << result << endl;
        }
    }
    return 0;
}