// pratice problem 2
#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
	int jersey_no;
	string country;
};

int main()
{
    // create dynamic object dhoni and set value 

    Cricketer *dhoni = new Cricketer();
    dhoni->jersey_no = 7;
    dhoni->country ="india";

    // create dynamic object kohli and copy dhoni address

    // Cricketer *kohli = new Cricketer();
    // kohli = dhoni;   // this point not print heap memory delete dhoni value 

    // copy for value dhomi to kohli

    Cricketer *kohli = new Cricketer();
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    // delete dhoni for heap memory

    delete dhoni;

    // print return for garvage value 
    //cout<<kohli->jersey_no<<" "<<kohli->country<<endl;

    // print return for abs value
    cout<<kohli->jersey_no<<" "<<kohli->country<<endl;

    return 0;
}
// or

// #include <bits/stdc++.h>
// using namespace std;

// class Cricketer
// {
// public:
//     int jersey_no;
//     string country;
// };

// int main()
// {
//     Cricketer *dhoni = new Cricketer(); // heap a create hassa
//     dhoni->jersey_no = 7;
//     dhoni->country = "India";

//     // Cricketer *kohli = new Cricketer();
//     // kohli = dhoni;     //  এটা কাজ করবে না সঠিকভাবে

//     //kohli তৈরি এবং manually copy

//     Cricketer *kohli = new Cricketer();
//     kohli->jersey_no = dhoni->jersey_no;
//     kohli->country = dhoni->country;

//     // dhoni delete
//     delete dhoni;
//     dhoni = nullptr;

//     // kohli print
//     cout << kohli->jersey_no << endl;
//     cout << kohli->country << endl;

//     delete kohli;

//     return 0;
// }

