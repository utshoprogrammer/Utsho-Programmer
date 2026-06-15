// #include<stdio.h>

// void hello(int i)
// {
//     if (i == 0)     //end conditon
//     {
//         return;
//     }  
//     printf("%d\n",i);
//     hello(i-1);     //increment /decrement
// }
// int main()
// {
//     int i = 5;     //initialization /starting
//     hello(i); 
//     return 0;
// }

// diffrent logic use 

#include<stdio.h>

void hello(int i)
{
    if (i == 6)     //end conditon
    {
        return;
    }  
    hello(i+1);     //increment /decrement
    printf("%d\n",i);
}
int main()
{
    int i = 1;     //initialization /starting
    hello(i); 
    return 0;
}