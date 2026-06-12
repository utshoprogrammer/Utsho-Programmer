#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int len = s.size();
        if (len <= 10)
        {
            cout << s << endl;
        } 
        else
        {
            cout << s[0];
            int count = 0;
            for (int i = 1; i < len-1; i++)
            {
                if(i != len-1)
                    count++;
            }  
            cout << count;
            cout << s[len-1] << endl;    
        }
    }
    return 0;
}