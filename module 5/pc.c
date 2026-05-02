#include<stdio.h>
int main()
{
    long long int X;
    long long int Y;
    scanf("%lld %lld",&X, &Y);

    printf("%lld + %lld = %lld\n",X,Y, X+Y);
    printf("%lld * %lld = %lld\n",X,Y, X*Y);
    printf("%lld - %lld = %lld\n",X,Y, X-Y);

    return 0;
}

// #include<stdio.h>
// int main()
// {
//     long long int a,b,c,d;
//     scanf("%lld %lld %lld %lld",&a, &b, &c, &d);
//     long long int X = ( a * b ) - ( c * d ); 
//     printf("Difference = %lld",X);
//     return 0;
// }