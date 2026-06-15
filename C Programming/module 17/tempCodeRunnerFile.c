#include<stdio.h>

void fun(int i,int n)
{
    if (i == n)
    {
        printf("%d",i);
        return;
    }
    fun(i-1,n);
    printf("%d ",i);
    
}
int main()
{
    int n;
    scanf("%d",&n); 
    fun(n,1);
    return 0;
}