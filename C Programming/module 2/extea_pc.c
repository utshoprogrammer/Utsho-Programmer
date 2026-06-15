#include<stdio.h>
int main()
{
     int num;
     scanf("%d", &num);
    // if (num%2==0)
    // {
    //     printf("the number is even\n");
    // }
    // else
    // {
    //     printf("the number is odd");
    // }
    if (num>=1)
    {
        printf("the number is positive");
    }
    else if (num==0)
    {
       printf("the number is general");
    }
    else
    {
        printf("the number is negative");
    }
    return 0;
}