#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int N = sqrt(n);
        int cout_dev = 2;
        for (int i = 2; i <= N; i++)
        {
            if(n%i == 0)
            {
                cout_dev++;
            }
        }
        if(cout_dev == 2)
        {
            cout << "YES"<<endl;;
        }
        else
        {
            cout <<"NO"<<endl;
        }        
    }   
    return 0;
}