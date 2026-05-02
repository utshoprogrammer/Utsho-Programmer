#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int sum1 = a%10;
    long long int sum2 = b%10;
    long long int sum = sum1+sum2;
    printf("%lld",sum);

    return 0;
}