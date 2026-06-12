#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string s = "Hello";
    // string s2 = "Hi";

    //s += s2;        // string add kora 
    //s.append(s2);

    //s.push_back('A');  // last index a only one char add kora
    //s += 'B';         // same
    //s[5] = 'A'; // this is not add last index char element

    // s.pop_back();  // last index thaka one element remove kora
    // s.pop_back();   // two ta lekela two element remove korba

    //s = s2;       // string mun assign kora s a s2 rakha
    //s.assign(s2);   // same

    //string s = "Hello World";

    //s.erase(5);     // index 5 thaka sob delete kora 
    //s.erase(3,2);       // nij essa moto delete 1st start index 2nd koto char delete korbo

    //s.replace(6,5,"Bangladesh");  // 1st change start index 2nd koto ta char delete karbo 3rd ke basabo

    //s.insert(5,"pias"); // 1st change start index 2nd ke basabo 

    //cout << s <<endl;

    // replace function important 

    string s;
    cin >> s;
    
    int indx = s.find("x");

    if(indx != -1)
    {
        s.replace(indx,1," ");
    }
    cout << s << endl;

    return 0;
}