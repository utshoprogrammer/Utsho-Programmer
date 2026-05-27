#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    switch (x % 2)
    {
    case 0:
        cout << "Even\n";
        break;

    default:
        cout << "Odd\n";
        break;
    }
    return 0;
}