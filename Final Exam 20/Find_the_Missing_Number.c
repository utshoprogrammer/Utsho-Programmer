#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);  //input test case 
    long long int m, a, b, c;

    for (long long int i = 0; i < t; i++) //input values for using loop
    {
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);
        long long int x = m / (a * b * c);
        
        if ((a*b*c) * x == m)   // calculation true hala print this x value
        {
            printf("%lld\n",x);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}