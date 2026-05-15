#include<stdio.h>

void array(int a[],int n,int i)
{
    if (i == n)     //end conditon
    {
        return;
    }  
    printf("%d\n",a[i]);
    array(a,n,i+1);        //increment /decrement
}
int main()
{
    int n;             //initialization /starting
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }   
    array(a,n,0); 
    return 0;
}