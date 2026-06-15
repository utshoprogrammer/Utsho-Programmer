// #include <stdio.h>
// #include <limits.h>

// long long int max = LLONG_MIN;
// void func(long long int a[], int n, int i)
// {
//     if (i == n)
//         return;
//     func(a, n, i + 1);
//     if (a[i] > max)
//     {
//         max = a[i];
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%lld", &a[i]);
//     }
//     func(a, n, 0);
//     printf("%lld", max);

//     return 0;
// }

// or return 

#include <stdio.h>
#include <limits.h>

long long int max = LLONG_MIN;
long long int fun(long long int a[], int n, int i)
{
    if (i == n)
        return LLONG_MIN;
    long long int max_tmp = fun(a, n, i + 1);
    if (a[i] > max_tmp)
    {
        return a[i];
    }
    return max_tmp;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    long long int ans = fun(a, n, 0);
    printf("%lld", ans);

    return 0;
}
