#include<bits/stdc++.h>
using namespace std;

class Cricketer
{
    public:
    string country;
    int jersey;
    // create constructor
    Cricketer(string coutry,int jersey)
    {
        this->country = coutry;
        this->jersey = jersey;
    }

};
int main()
{
    // Create dynamic object
    Cricketer * dhoni = new Cricketer("India",100);
    Cricketer * kohli = new Cricketer("India",18);

    // do't work this copy

    // kohli = dhoni;
    // delete dhoni;

    // cout<<kohli->country<<" "<<kohli->jersey<<endl;

    // work this copy

    // kohli->country = dhoni->country;
    // kohli->jersey = dhoni->jersey;
    // delete dhoni;

    // cout<<kohli->country<<" "<<kohli->jersey<<endl;

    // or sortcut 

    *kohli = *dhoni;
    delete dhoni;

    cout<<kohli->country<<" "<<kohli->jersey<<endl;
  
    return 0;
}