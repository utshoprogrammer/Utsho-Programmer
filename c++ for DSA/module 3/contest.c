#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n];
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}