#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int frist_digit_sum = 0;
        int last_digit_sum = 0;

        for(int i = 0; i < s.size();i++)
        {
            if(i < 3)
            {
                frist_digit_sum += s[i] - 48;
            }
            else
            {
                last_digit_sum += s[i] - 48;
            }
            
        }
        if(frist_digit_sum == last_digit_sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    } 
    return 0;
}