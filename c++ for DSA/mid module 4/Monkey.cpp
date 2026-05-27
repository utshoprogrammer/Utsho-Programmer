// sort function TC = 10^6 time complacity
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char s[100005];
//     while (cin.getline(s,100005))
//     {
//         int len = strlen(s);

//         sort(s,s+len);

//         for (int i = 0; i < len; i++)
//         {
//             if(s[i] != ' ')
//             {
//                 cout << s[i];
//             }
//         }
//         cout<<endl;   
//     }
//     return 0;
// }

// sorting ferquence 10^8 TC = time complacity

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    while (cin.getline(s,100005))
    {
        int len = strlen(s);
    
        int fre[26] ={0};

        for (int i = 0; i < len; i++)
        {
            if(s[i] == ' ')
            {
                continue;
            }
            fre[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < fre[i]; j++)
            {
                cout << (char)(i+'a');
            }    
        } 
        cout<<endl;   
    }
    return 0;
}