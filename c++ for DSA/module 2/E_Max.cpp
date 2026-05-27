// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int flag = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         flag = max(x,flag);
//     }  
//     cout << flag;
    
//     return 0;
// }

// or 

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
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        flag = max(a[i],flag);
    }  
    cout << flag;
    
    return 0;
}