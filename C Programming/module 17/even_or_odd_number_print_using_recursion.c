// even number print for recursion
// #include<stdio.h>

// void hello(int i)
// {
//     if (i == 11)     //end conditon
//     {
//         return;
//     }
//     if (i%2==0)
//     {
//         printf("%d\n",i);
//     }
//     hello(i+1);     //increment /decrement
// }
// int main()
// {
//     int i = 1;     //initialization /starting
//     hello(i); 
//     return 0;
// }

//odd number print for recursion
#include<stdio.h>

void hello(int i)
{
    if (i == 11)     //end conditon
    {
        return;
    }
    if (i%2!=0)
    {
        printf("%d\n",i);
    }
    hello(i+1);     //increment /decrement
}
int main()
{
    int i = 1;     //initialization /starting
    hello(i); 
    return 0;
}