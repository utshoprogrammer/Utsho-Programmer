#include<stdio.h>

long long int fac(int n)
{
    if (n==1)
    {
        return 1;
    }
    long long int count = fac(n-1);
    return n*count;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int ans = fac(n);
    printf("%lld",ans);
    return 0;
}