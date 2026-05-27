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
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    int sum[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = a[i] + b[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",sum[i]);
    }
    
    return 0;
}