#include<stdio.h>

void num()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d",x,y);
}
int main()
{
    num();
    return 0;
}