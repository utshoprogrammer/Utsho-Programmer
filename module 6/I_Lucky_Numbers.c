#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int d1,d2;
    d1 = x/10;
    d2 = x%10;
    if (d2 == 0 || d1 == 0)
    {
        printf("YES");
    }
    else if (d1%d2==0||d2%d1==0)
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}