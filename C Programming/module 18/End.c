#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }

    for (long long int i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (n % 2 == 0)
        {
            if (i>j) break;
            {
               printf ("%lld ", a[i]);
               printf("%lld ", a[j]);
            }
        }
        else if (n % 2 != 0)
        {
            printf ("%lld ", a[i]);
            if (i==j)break;
            {
               printf("%lld ", a[j]);
            }
        }
    }

    return 0;
}