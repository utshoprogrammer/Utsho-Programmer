#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        
        int len = x.size();

        while (true)
        {
            int indx = s.find(x);

            if (indx == -1)
            {
                break;
            }
            else
            {
                s.replace(indx, len, "#");
            }
        }
        cout << s << endl;
    }

    return 0;
}