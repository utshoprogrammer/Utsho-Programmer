#include<stdio.h>

void num()
{
    int n;
    scanf("%d",&n);
    for (int i = 1; i < n; i++)
    {
        printf("%d ",i);      
    }
    printf("%d",n);
}
int main()
{
    num();
    return 0;
}