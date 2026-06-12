// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int cout_e = 0;int cout_g = 0;int cout_y = 0;int cout_p = 0;int cout_t = 0;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if(s[i] == 'e' || s[i] == 'E')
//         {
//             cout_e++;
//         }
//         if(s[i] == 'g' || s[i] == 'G')
//         {
//             cout_g++;
//         }
//         if(s[i] == 'y' || s[i] == 'Y')
//         {
//             cout_y++;
//         }
//         if(s[i] == 'p' || s[i] == 'P')
//         {
//             cout_p++;
//         }
//         if(s[i] == 't' || s[i] == 'T')
//         {
//             cout_t++;
//         }
//     }
//     int word_cout = min({cout_e,cout_g,cout_p,cout_y,cout_t});

//     cout << word_cout << endl;
    
//     return 0;
// }

// or 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >>s;

    int fre[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {   // char gulo ka small alpha convert kore
        char ch = tolower(s[i]);

        // char k indx a convert kore 
        fre[ch - 'a']++;
    }

    int result = INT_MAX;

    for (int i = 0; i < 26; i++)
    {   // index i ke char a convert kora
        char ch = i + 'a';

        if(ch == 'e'|| ch == 'g'|| ch == 'y'|| ch == 'p'|| ch == 't')
        {
            result = min(result,fre[i]);
        }
    }
    cout << result << endl;
    
    return 0;
}