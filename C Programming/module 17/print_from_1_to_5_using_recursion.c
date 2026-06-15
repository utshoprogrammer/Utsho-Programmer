#include<stdio.h>

void hello(int i)
{
    if (i == 6)     //end conditon
    {
        return;
    }  
    printf("%d\n",i);
    hello(i+1);     //increment /decrement
}
int main()
{
    int i=1;     //initialization /starting
    hello(i); 
    return 0;
}

// for(int i=0;i<5;i++)
//for(int =5-1;i>=0;i--)