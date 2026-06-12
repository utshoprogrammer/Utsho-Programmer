#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string str;
    cin >> str;

    stringstream ss(s);

    string word;

    int count_word =0;

    while (ss >> word)
    {
        if(word == str)
        {
            count_word++;
        }
        else{
            continue;
        }
    }
    cout << count_word << endl;

    return 0;
}