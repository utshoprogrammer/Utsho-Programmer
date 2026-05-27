#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    switch (x)
    {
        case 1:
            cout << "saterday\n";
            break;
        case 2:
            cout << "sunday\n";
        case 3:
            cout << "monday\n";
            break;
        case 4:
            cout << "tuesday\n";
            break;
        case 5:
            cout << "wednesday\n";
            break;
        case 6:
            cout << "thusday\n";
            break;
        case 7:
            cout << "friday\n";
            break;
        default:
            cout<<"worng input\n";
        return 0;
    }
}