#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    while (true)
    {
        int indx = s.find("EGYPT");

        if (indx == -1)
        {
           break;
        } 
        else
        {
            s.replace(indx, 5, " ");
        }
    }
    cout << s << endl;

    return 0;
}