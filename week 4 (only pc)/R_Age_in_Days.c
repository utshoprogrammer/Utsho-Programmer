#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int year = n/365;
    printf("%d years\n",year);

    int rimining_day = n%365;

    int month = rimining_day/30; 
    printf("%d months\n",month);

    printf("%d days",rimining_day%30);
   
    return 0;
}