#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j = 1; j <= t; j++)
    {
        long long int n;
        scanf("%lld", &n);
        long long int multi = 1;
        for (int i = 1; i <= n; i++)
        {
            multi = multi * i;
        }
        printf("%lld", multi);
        printf("\n");
    }
    return 0;
}