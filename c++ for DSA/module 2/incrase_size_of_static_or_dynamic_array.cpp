//incrase static array

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a[3];
//     for (int i = 0; i < 3; i++)
//     {
//         cin >> a[i];
//     }
//     int b[5];
//     for (int i = 0; i < 3; i++)
//     {
//         b[i] = a[i];
//     }
//     b[3] = 40;
//     b[4] = 50;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << b[i] <<" ";
//     } 
//    return 0; 
// }

//incrase and delete dynamic array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[3];  // dynamic array
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    int *b = new int[5];  // incrase new dynamic array 
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];   // copy array a to b 
    }
    b[3] = 40;  // add new value for new array b
    b[4] = 50;
    delete[] a;   //  delete old array from heap memory
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] <<" ";
    } 
   return 0; 
}