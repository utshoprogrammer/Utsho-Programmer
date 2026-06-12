// #include <bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     int fre[26] = {0};
//     int result = 0;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = s[i];
//         // char k indx a convert 
//         fre[ch - 'A']++;
//         // check the indx value count
//         if (fre[ch - 'A'] > 1)
//         {
//             result++;
//         }
//         else
//         {
//             result += 2;
//         }
//     }
//     cout << result << endl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

// way no 2 

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

        string s;
        cin >> s;

        int fre[26] = {0};

        int result = 0;

        for (int i = 0; i < n; i++)
        {
            char ch = s[i];

            fre[ch - 'A']++;

            if (fre[ch - 'A'] > 1)
            {
                result++;
            }
            else
            {
                result += 2;
            }
        }
        cout << result << endl;
    }
    return 0;
}